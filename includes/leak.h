#ifndef _HEAP2H
#define _HEAP2H

#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#if defined(__GLIBC__)
#include <malloc.h>
#define TRIM() malloc_trim(0)
#elif defined(__APPLE__)
#include <malloc.h>
#define TRIM() malloc_zone_pressure_relief(0, 0)
#else
#define TRIM() return
#endif

size_t target_usage = 0;

void get_memory_usage(size_t *memory_usage) {
  TRIM();
  FILE *file = fopen("/proc/self/status", "r");

  char line[128];
  while (fgets(line, sizeof(line), file)) {
    if (strncmp(line, "VmSize:", 7) == 0) {
      sscanf(line, "VmSize: %ld", memory_usage);
    }
  }
  fclose(file);
}

void init_test() { get_memory_usage(&target_usage); }

void test_memory() {
  TRIM();
  size_t current_usage;
  get_memory_usage(&current_usage);

  if (current_usage > target_usage) {
    printf("There is a memory leak\n");
  }
}

#endif

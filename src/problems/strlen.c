/*
 * Sometimes it can be usefull to know how long a string is. The C standard
 * library provides a function, 'strlen', that tells us just that. But be
 * carefull 'strlen' does not count the zero terminator.
 *
 * An arena is just a way to take control over the memory management of the
 * allocation of memory. You allocate a big chunk at the start, and then you
 * distrobute the memory yourself.
 *
 * This program tries to copy a string from rodata to our arena.
 */
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct arena {
  void *start;
  size_t size;
  size_t used;
};

typedef struct arena arena_t;

arena_t *init_arena(size_t size) {
  arena_t *arena = malloc(sizeof(arena_t));
  arena->size = size;
  arena->start = malloc(size);

  for (int i = 0; i < size; i++) {
    *((uint8_t *)(arena->start + i)) = 65;
  }

  return arena;
};

void *get_memory(arena_t *arena, size_t size) {
  size_t memory_left = arena->size - arena->used;
  if (memory_left < size)
    return NULL;

  void *address = arena->start + arena->used;
  arena->used += size;

  return address;
}

int main() {
  arena_t *arena = init_arena(64);
  char *string1 = "Hello, world!";

  size_t string_length = strlen(string1);

  char *string2 = get_memory(arena, string_length);

  for (int i = 0; i < string_length; i++) {
    string2[i] = string1[i];
  }

  printf("%s\n", string2);
}

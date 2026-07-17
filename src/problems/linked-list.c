/*
 * When you need a list with variable length, the array in C can be quit
 * limiting. It needs a fixed size, and all elements needs to be after each
 * other in memory. A linked list fixes this problem by making each element
 * point to the next element in the list. You save only the address to the first
 * element, the first element knows where the second element is and so on. This
 * means that elements don't need be after each other in memory, it also means
 * that adding a new element is super easy. Just save the element somewhere in
 * memory, make it point to the first element, and save this as the first
 * element. This places the element first in the list, you can also make it the
 * last by making the last element point to it.
 *
 * You can't recursively save a struct in the same struct, since this would mean
 * the struct would need inifinite memory. But you can save a pointer to a
 * struct of the same type in a struct.
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list_node {
  int data;
  struct linked_list_node next;
} ll_node;

typedef struct linked_list {
  int length;
  struct linked_list_node *head;
} ll;

ll *init_list() {
  ll *list = malloc(sizeof(ll));
  list->length = 0;
  list->head = NULL;
  return list;
}

void list_add(ll *list, int data) {
  ll_node *new_node = malloc(sizeof(ll_node));
  new_node->data = data;
  new_node->next = list->head;

  list->head = new_node;
  list->length++;
}

void print_list(ll *list) {
  for (ll_node *c = list->head; c != NULL; c = c->next) {
    printf("%d\n", c->data);
  }
}

int main() {
  ll *list = init_list();
  for (int i = 0; i < 10; i++) {
    int num = i;
    list_add(list, num);
  }

  print_list(list);
}

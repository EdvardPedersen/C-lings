/*
 * In C the closest we get to a generic data type is the void pointer. The void
 * pointer, decleard `void *var_name;`, is just a generic pointer. Here the
 * compiler only knows the data location but not the size of it. Without knowing
 * the size you can't do anything with the data. The advantage of a void pointer
 * is that you can write data structures that is independent of the type of data
 * it stores.
 *
 * To use the data of a void pointer you need to tell compiler what data type
 * the void pointer is when you use it, this is done by casting. To cast a
 * variable you place the type you want to cast to inside parentheses just
 * before the variable name, e.g. `(int*)data_pointer`, here we cast the
 * variable 'data_pointer' to a 'int pointer'.
 *
 * This code makes a simple linked list, and saves the numbers 0-9 in it, and
 * then tries to print the list.
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list_node {
  void *data;
  struct linked_list_node *next;
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

void list_add(ll *list, void *data) {
  ll_node *new_node = malloc(sizeof(ll_node));
  new_node->data = data;
  new_node->next = list->head;

  list->head = new_node;
  list->length++;
}

void print_list(ll *list) {
  for (ll_node *c = list->head; c != NULL; c = c->next) {
    printf("%d\n", *c->data);
  }
}

int main() {
  ll *list = init_list();
  for (int i = 0; i < 10; i++) {
    int *num = malloc(sizeof(int));
    *num = i;
    list_add(list, num);
  }

  print_list(list);
}

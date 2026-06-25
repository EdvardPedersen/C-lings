#include <stdio.h>
#include <stdlib.h>

typedef struct int_list_elm {
  int num;
  struct int_list_elm *next_element;
} node;

int main() {
  node *first_element = malloc(sizeof(node));
  first_element->num = 1;

  // Make a list with numbers from 1 to 9
  node *current_element = first_element;
  for (int i = 0; i < 10; i++) {
    node *new_element;
    new_element->num = current_element->num + 1;

    current_element->next_element = new_element;
    current_element = new_element;
  }

  // Print the numbers
  current_element = first_element;
  for (int i = 0; i < 10; i++) {
    printf("Num at position %d: %d\n", i, current_element->num);
    current_element = current_element->next_element;
  }
}

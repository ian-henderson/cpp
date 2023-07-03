#include <iostream>

#include "lib/linked_list.h"

int main() {
  Node *head = new Node(0);
  append(head, 1);
  append(head, 0);
  append(head, 9);
  append(head, 3);
  append(head, 2);
  append(head, 2);

  std::cout << "Before:\t";
  print_list(head);

  remove_index(&head, 4);
  remove_value(&head, 0);

  std::cout << "After:\t";
  print_list(head);

  return 0;
}

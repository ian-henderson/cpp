#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class Node {
 public:
  Node(int value);
  int value;
  Node *next;
};

void append(Node *head, int value);

void print_list(Node *head);

void remove_index(Node **head, int index);

void remove_value(Node **head, int value);

#endif

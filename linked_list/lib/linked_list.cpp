#include <iostream>

#include "linked_list.h"

Node::Node(int v) {
  next = NULL;
  value = v;
}

void append(Node *head, int value) {
  Node *current = head;

  while (current->next) current = current->next;

  current->next = new Node(value);
}

void print_list(Node *head) {
  if (!head) {
    std::cout << "Empty list!" << std::endl;
    return;
  }

  Node *current = head;

  while (current) {
    std::cout << current->value;

    if (current->next)
      std::cout << ", ";
    else
      std::cout << std::endl;

    current = current->next;
  }
}

void remove_index(Node **head, int index) {
  Node *current = *head;
  Node *previous = *head;
  int i = 0;

  while (i <= index) {
    // delete head node
    if (i == 0 && i == index) {
      *head = (*head)->next;
      delete current;
      break;
    }

    if (i == index && current) {
      previous->next = current->next;
      delete current;
      break;
    }

    previous = current;
    if (!previous) break;
    current = current->next;
    i++;
  }
}

void remove_value(Node **head, int value) {
  if (!head) return;

  Node *current = *head, *previous = NULL;

  // deletes head if head has target value
  while (current && current->value == value) {
    *head = current->next;
    delete current;
    current = *head;
  }

  // delete occurances after head
  while (current) {
    // loops over nodes that don't need to be deleted'
    while (current && current->value != value) {
      previous = current;
      current = current->next;
    }

    // if end reached
    if (!current) return;

    // takes current out of list
    previous->next = current->next;

    // murder
    delete current;

    // next iteration
    current = previous->next;
  }
}

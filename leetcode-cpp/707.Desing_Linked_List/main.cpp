#include <iostream>

class MyLinkedList {
public:
  struct Node {
    int val;
    Node *next;
    Node(int x) : val(x), next(nullptr){};
  };

  Node *head;
  int size;

  MyLinkedList() {
    head = nullptr;
    size = 1;
  }

  // Adding a node at the end of the linked list

  void addAtHead(int val) {
    Node *node = new Node(val);
    node->next = head;
    head = node;
    size++;
  }

  void addAtTail(int val) {
    Node *node = new Node(val);
    if (size == 0) {
      head = node;
      size++;
      return;
    }
    Node *curr = head;
    while (curr && curr->next) {
      curr = curr->next;
    }
    curr->next = node;
    size++;
    return;
  }

  int get(int index) {
    Node *curr = head;
    if (size < index) {
      return -1;
    }
    while (curr && index > 0) {
      index--;
      curr = curr->next;
    }
    if (curr) {
      return curr->val;
    } else {
      return -1;
    }
    // Unreachable code

    return EXIT_FAILURE;
  }

  void  reverse_list() {
    Node *prev = nullptr;
    Node *curr = head;

    while (curr) {
      Node *tmp = curr->next;
      curr->next = prev;
      prev = curr;
      curr = tmp;
    }
    head = prev;
  }

  void deleteAtIndex(int index) {
    size--;
    Node *curr = head;
    while (curr && curr->next && index > 2) {
      index--;
      curr = curr->next;
    }
    curr->next = curr->next->next;
    // std::cout << "Size " << size << "index " << index << std::endl;

    return;
  }


};

int main() {
  MyLinkedList linkedList;

  // Adding elements to the linked list
  linkedList.addAtHead(69);
  linkedList.addAtTail(1);
  linkedList.addAtTail(2);
  linkedList.addAtTail(3);
  linkedList.addAtTail(4);

  // linkedList.reorderList(linkedList.getHead());
  // Accessing elements of the linked list
  std::cout << "Element at index 0: " << linkedList.get(0)
            << std::endl; // Output: 5
  std::cout << "Element at index 1: " << linkedList.get(1)
            << std::endl; // Output: 7
  std::cout << "Element at index 2: " << linkedList.get(2)
            << std::endl; // Output: 10
  std::cout << "Element at index 3: " << linkedList.get(3)
            << std::endl; // Output: -1 (Invalid index)

  std::cout << "Element at index 4: " << linkedList.get(4) << std::endl;


  std::cout << "Reversed list: ";
  linkedList.reverse_list(); 
    std::cout << "Element at index 0: " << linkedList.get(0)
            << std::endl; // Output: 5
  std::cout << "Element at index 1: " << linkedList.get(1)
            << std::endl; // Output: 7
  std::cout << "Element at index 2: " << linkedList.get(2)
            << std::endl; // Output: 10
  std::cout << "Element at index 3: " << linkedList.get(3)
            << std::endl; // Output: -1 (Invalid index)
  return 0;
}

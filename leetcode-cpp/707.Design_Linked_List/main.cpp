#include <iostream>

class MyLinkedList {
public:
  struct Node {
  	int val{};
  	Node* next;
  	Node(int x = 0)
  	:val(x), next(nullptr){
  	}
  };

  Node* head;
  int size;

   MyLinkedList(){
  	head = nullptr;
  	size = 0;
  };

  
  void addAtHead(int val) {
	Node* node = new Node(val);
	node->next = head;
	head = node;
	size ++;
	return;
  }

  void addAtTail(int val) {
  	size++;
	Node* node = new Node(val);
  	if (!head){
  		addAtHead(val);
  		return;
  	}
	Node* curr = head;
	while(curr->next){
		curr = curr->next;
	}
	curr->next = node;
	return;
  }

  int get(int index) {
    if (index >= size || index < 0) {
        return -1;  // or some other error indicator
    }
    Node* curr = head;
    for (int i = 0; i < index; i++){
 	  curr = curr->next; 	
    }
    return  curr->val;
  }

  void reverse_list() {
	Node* prev = nullptr;
	Node* curr = head;

	while(curr){
		Node* tmp = curr -> next;
		curr ->next = prev;
		prev = curr;
		curr = tmp;
	}
	head = prev;
  }

  void deleteAtIndex(int index) {
    if (index > size) {
    	throw std::out_of_range("Index is > Size, can you count?!");
    }
	Node* curr = head;
	for (int i = 0; i < index - 1; i++){
		curr = curr->next;
	} 
    curr->next = curr->next->next;
    size --;
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
  // linkedList.deleteAtIndex(100);
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
  std::cout << "Element at index 4: " << linkedList.get(4)
  		    << std::endl;
  std::cout << "Size " << linkedList.size 
      		<< std::endl;

 

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
   std::cout << "Element at index 3: " << linkedList.get(4)
            << std::endl; // Output: -1 (Invalid index)
  return 0;
}

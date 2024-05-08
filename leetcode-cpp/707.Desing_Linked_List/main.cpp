#include <iostream>

class MyLinkedList {
	struct Node {
		int val;
		Node *next;
		Node(int x)
		: val(x),
		   next(nullptr) {
		   	
		   }
	};

	Node* head;
	int size;
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        head = nullptr;
		size = 0;
    }

	void addAtHead(int val) {
		Node* curr = new Node(val);
		curr -> next = head;
		head = curr;
		size++;
	}
    void addAtTail(int val) {
    	Node* newNode = new Node(val);
    	Node* curr = head;
    	if (!curr){
    		addAtHead(val);
    	}
       	while (curr && curr -> next) {
       		curr = curr -> next;
       	}
       	curr -> next = newNode;
       	size ++;
    }
    
    
    // Get the value of the index-th node in the linked list. If the 
    //index is invalid, return -1.
    int get(int index) {
		int num { 0 };
		Node* curr = head;
		if (index > size) return -1;

		while (curr && (num != index)){
			num++;
			curr = curr->next;
		}
		if (curr) return curr -> val;
		return -1;
	}
	
	void addAtIndex(int index, int val){
		Node* node = new Node(val);
		Node* curr = head;
		
		while (curr && curr-> next && index > 1){
			curr = curr -> next;
			index --;
		}
		node -> next = curr -> next;
		curr -> next = node;
	}

	void deleteAtIndex(int index) {
		Node* curr = head;
		
		while (curr && curr-> next && index > 1){
			curr = curr -> next;
			index --;
		}
		curr -> next = curr -> next -> next;
    }
};



int main() {
    MyLinkedList linkedList;

    // Adding elements to the linked list
	 linkedList.addAtTail(1);
    linkedList.addAtTail(2);
    linkedList.addAtTail(3);
    linkedList.addAtTail(4);
   
	// linkedList.addAtIndex(2,69);
	linkedList.deleteAtIndex(2);
    // Accessing elements of the linked list
    std::cout << "Element at index 0: " << linkedList.get(0) << std::endl; // Output: 5
    std::cout << "Element at index 1: " << linkedList.get(1) << std::endl; // Output: 7
    std::cout << "Element at index 2: " << linkedList.get(2) << std::endl; // Output: 10
    std::cout << "Element at index 3: " << linkedList.get(3) << std::endl; // Output: -1 (Invalid index)

    return 0;
}

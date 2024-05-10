#include <iostream>

class Solution {

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

public:
    void reorderList(ListNode* head) {
    	int size{ 0 };
	    // splt
		ListNode* curr = head;
		while (curr){
			size ++;
		}
    	//reverse

    	//merge
        
    }

    
};

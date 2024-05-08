
class Solution {
public:
    struct ListNode {
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
    };

    ListNode* reverseList(ListNode* head) {
		ListNode* prev = nullptr;
		ListNode* curr = head;
        while (curr){
        	ListNode* tmp = curr -> next;
        	curr-> next = prev;
        	prev = curr;
        	curr = tmp;
        }
        return prev;
    }
};
#include <iostream>

int main() {
    Solution solution;

    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Solution::ListNode* head = new Solution::ListNode(1);
    head->next = new Solution::ListNode(2);
    head->next->next = new Solution::ListNode(3);
    head->next->next->next = new Solution::ListNode(4);
    head->next->next->next->next = new Solution::ListNode(5);

    // Reverse the list
    Solution::ListNode* reversedHead = solution.reverseList(head);

    // Print the reversed list
    Solution::ListNode* current = reversedHead;
    while (current != nullptr) {
        std::cout << current->val << " ";
        current = current->next;
    }

    // Don't forget to delete the nodes to prevent memory leaks
    while (reversedHead != nullptr) {
        Solution::ListNode* nextNode = reversedHead->next;
        delete reversedHead;
        reversedHead = nextNode;
    }

    return 0;
}


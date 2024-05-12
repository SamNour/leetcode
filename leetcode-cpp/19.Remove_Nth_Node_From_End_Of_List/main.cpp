/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {

public:
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode*  curr = head;

        while (curr){
            ListNode* tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }
        return prev;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* revHead = reverse(head);
        ListNode* curr = revHead;
        int size {};

        while(curr){
            std::cout << curr->val;
            curr = curr->next;
            size++;
        }
        if (size == 1){ return revHead=nullptr; }
        if (n == 1) {
            return reverse(revHead->next);
            }        
        if (size == 2 && n == 2){ 
            revHead->next = nullptr;
            return revHead;
            }
        curr = revHead;
        while(curr && n > 2){
            curr = curr->next;
            n--;
        }
        curr->next = curr->next->next;

        return reverse(revHead);
    }
};

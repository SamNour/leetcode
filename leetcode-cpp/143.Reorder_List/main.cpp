#include <iostream>
#include <vector>

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:


    void printList(ListNode* head) {
    ListNode* curr = head;
    while (curr) {
        std::cout << curr->val;
        if (curr->next)
            std::cout << " -> ";
        curr = curr->next;
    }
    std::cout << std::endl;
    }

    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr){
            ListNode* tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }
        return prev;
    }

 void merged(ListNode* list1, ListNode* list2) {
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;
    printList(list1);
    printList(list2);
    while (list1 && list2) {
        curr->next = list1;
        list1 = list1->next;
        curr = curr->next;

        curr->next = list2;
        list2 = list2->next;
        curr = curr->next;
    }

    if (list1){
        curr->next=list1;
    } else {
        curr->next = list2;
    }
}

    void reorderList(ListNode* head) {
        int size{};
        ListNode* secondList;
        ListNode* curr = head;
        while (curr) {
            curr = curr -> next;
            size++;
        }
        int half = (size)/2;

        curr = head;
        while (curr && (size - 1 > half)) {
            curr = curr -> next;
            size--;
        }
        secondList = curr->next;
        curr->next = nullptr;
        ListNode* revSecondList = reverse(secondList);
        merged(head, revSecondList);
    }
};
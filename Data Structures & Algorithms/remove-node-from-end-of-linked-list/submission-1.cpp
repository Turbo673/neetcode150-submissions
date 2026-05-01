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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* curr = head; 
        while(curr != nullptr) {
            size++;
            curr = curr->next;
        }
        curr = head; 
        if(size == n) {
            // insert at head
            ListNode* tmp = head;
            head = head->next;
            delete tmp;
            return head;
        }
        for(int i = 1; i < size - n; i++) {
            curr = curr->next;
        }
        ListNode* tmp = curr->next;
        curr->next = curr->next->next;
        delete tmp;
        return head;
    }
};

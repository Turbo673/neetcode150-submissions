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
        if(head == nullptr) return nullptr;
        int length = 0; 
        ListNode* curr = head;
        while(curr != nullptr) {
            length++;
            curr = curr->next;
        }
        if(length == n) {
            // insert at front
            ListNode* tmp = head;
            head = head->next;
            delete tmp;
            return head;
        }

        curr = head; 

        for(int i = 1; i < length - n; i++) {
            curr = curr->next;
        }
        ListNode* tmp = curr->next;
        curr->next = curr->next->next;
        delete tmp;
        return head;
    }
};

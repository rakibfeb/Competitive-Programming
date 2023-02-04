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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* temp = curr->next;
        
        while(curr != NULL){
            curr->next = prev;
            prev = curr;
            curr = temp;
            if(temp != NULL)
                temp = curr->next;
        }
        return prev;
    }
};
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
        if(head->next == NULL) return NULL;
        ListNode* p = head;
        ListNode* end = head;
        int count = 0;
        while(count != n){
            end = end->next;
            count++;
        }
        if(end == NULL) return head = p->next;
        while(end->next != NULL){
            p = p->next;
            end = end->next;
        }
        p->next = p->next->next;
        return head;
    }
};
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
    void reverse (ListNode *s,ListNode*e){
        ListNode* prev = NULL, *curr = s, * next = NULL;
        while(prev!=e){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL or head->next == NULL or k==1) return head;
        ListNode* dummy = new ListNode(-1);
        dummy->next= head;
        ListNode *beforeStart = dummy;
        ListNode *e = head;
        int  i = 0;
        while(e!=NULL){
            i++;
            if(i%k == 0){
                ListNode* temp = e->next;
                ListNode* s = beforeStart->next;
                reverse(s,e);
                beforeStart->next = e;
                s->next = temp;
                beforeStart = s;
                e = temp;
            }
            else{
                e = e->next;
            }
        }
        return dummy->next;
    }
};
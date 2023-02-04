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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        ListNode* s = list1;
        ListNode* b = list2;
        if(list2->val < list1->val){
            s=list2;
            b =list1;
        }
        ListNode* head = s;
        ListNode* temp = NULL;
        while(s->next != NULL){
            if(s->next->val > b->val){
                temp = s->next;
                s->next = b;
                b = temp;
            }
            s = s->next;
        }
        s->next = b;
        return head;
    }
};
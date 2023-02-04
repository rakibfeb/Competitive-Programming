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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        int hand=0;
        ListNode* p1pre = NULL;
        ListNode* p2pre = NULL;
        while(p1 != NULL && p2 != NULL){
            int sum = p1->val + p2->val+hand;
            int write = sum%10;
            hand = sum/10;
            p1->val = write;
            p2->val = write;
            p1pre = p1;
            p2pre = p2;
            p1 = p1->next;
            p2 = p2->next; 
        }
        while(p1 != NULL){
            int sum = p1->val +hand;
            int write = sum%10;
            hand = sum/10;
            p1->val = write;
            p1pre = p1;
            p1 = p1->next;
        }
        while(p2 != NULL){
            l1 = l2;
            int sum = p2->val +hand;
            int write = sum%10;
            hand = sum/10;
            p2->val = write;
            p2pre = p2;
            p2 = p2->next;
            
        }
        cout<<hand<<endl;
        if(hand!=0 ){
            ListNode* Node = new ListNode(hand);
            if(l1 == l2){
                p2pre->next = Node;
            }
            else
            {
                p1pre->next = Node;
            }
        }
        return l1;
    }
};
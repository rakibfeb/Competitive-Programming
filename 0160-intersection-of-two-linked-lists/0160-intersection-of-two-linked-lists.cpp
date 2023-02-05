/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* A = headA;
        ListNode* B = headB;
        int countA = 0, countB=0;
        while(A!=NULL)countA++,A = A->next;
        while(B!=NULL)countB++,B = B->next;
        cout<<countA<<endl;
        cout<<countB<<endl;
        A = headA;
        B = headB;
        if(countA > countB){
            while(countA != countB){
                A = A->next;
                countA--;
            }
        }
        else if (countB > countA ){
            while(countA!=countB){
                B= B-> next;
                countB--;
            }
        }
        
        while(A!=NULL || B!=NULL){
            if(A == B)return A;
            A=A->next;
            B=B->next;
        }
        
        return 0;
    }
};
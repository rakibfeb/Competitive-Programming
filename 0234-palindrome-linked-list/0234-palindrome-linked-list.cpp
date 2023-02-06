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
    ListNode* reverse (ListNode* head){
        ListNode* prev = NULL, * curr = head, *next = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev= curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
        ListNode* temp = head;
        int n = 0;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        int i = 0;
        temp = head;
        ListNode* mid = NULL;
        while(true){
            i++;
            if( i == (n+1)/2){
                mid = temp;
                break;
            }
            else{
                temp = temp->next;
            }
        }
        mid->next = reverse(temp->next);
        
        ListNode* p1 = head;
        ListNode* p2 = mid->next;
        while(p2 != NULL){
            if(p1->val != p2->val) return false;
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};
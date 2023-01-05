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
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        if(head == NULL || head->next == NULL ) return false;
        ListNode* fast = head->next;
        while(slow != fast )
        {
            //if(fast-> == NULL) return 
            if(fast->next != NULL && fast->next->next != NULL)
                fast = fast->next->next;
            else
                return false;
            slow = slow->next;
        }
       return true; 
    }
};
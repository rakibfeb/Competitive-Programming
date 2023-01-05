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
         // edge case 
        if(head == NULL || head->next == NULL || head->next->next == NULL) return false;
        // take animals to the trackline
        ListNode* turtle = head;
        ListNode* rabbit = head;
        // detect is there any cycle or not 
        while(rabbit->next != NULL && rabbit->next->next != NULL){
            rabbit = rabbit->next->next;
            turtle = turtle->next;
            // check if turtle and the rabbit at the same place or not 
            // if at the same place then stop the race
            if(turtle == rabbit)
                break;
        }
        
        // check if they are not not at the same place it means rabbit reached the              end line, so there have no cycle 
        if(turtle != rabbit )
            return false;
        
        return true;
    }
};
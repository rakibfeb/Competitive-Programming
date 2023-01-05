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
    ListNode *detectCycle(ListNode *head) {
        // edge case 
        // you can't return false because return type is ListNode, not the bool
        if(head == NULL || head->next == NULL || head->next->next == NULL) return NULL;
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
            return NULL;
        // if the we reached at that line it means there have a cycle
        // now we have to check where is the start of the cycle
        // to check start of cycle rabbit jump at the head beggining og the List  
        rabbit = head;
        // now rabbit and the turtle will take only one jump 
        
        while(rabbit  != turtle){
            rabbit= rabbit->next;
            turtle = turtle->next;
        }
    // if the code rached to this line it means congratulation! you got the start of     the loop
        
    // as rabbit and the turtle at the same place you can return any one of them
        
    return rabbit;
    }
};
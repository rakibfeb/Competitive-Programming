/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return head;
        Node* curr = head ;
        Node* nex = NULL;
        while(curr!= NULL){
            Node* node = new Node(curr->val);
            nex = curr->next;
            curr->next= node;
            node->next = nex;
            curr = nex;
            
        }
        
        curr = head;
        while(curr != NULL){
            if(curr->random == NULL){
                curr->next->random = NULL;
            }
            else{
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        Node* originalH = head;
        Node* copyH = head->next;
        Node* temp = NULL;
        while(originalH != NULL){
            temp = originalH->next;
            originalH->next = temp->next;
            (temp->next != NULL)?temp->next = originalH->next->next: temp->next = NULL;
            originalH = originalH->next;
            temp = temp->next;
        }
        return copyH;
    }
};
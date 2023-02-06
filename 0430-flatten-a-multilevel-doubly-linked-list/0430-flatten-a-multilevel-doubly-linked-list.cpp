/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
Node* flatten(Node* head) {
        
        stack<Node*> st;
        
        Node* curr = head;
        Node* tail = curr;
        while(curr!=NULL)
        {
            if(curr->child!=NULL)
            {
               if(curr->next!=NULL)
               {
                     st.push(curr->next);
                     curr->next->prev=NULL;
               }
                curr->next = curr->child;
                curr->next->prev = curr;
                curr->child = NULL;
                
            }
            
            tail = curr;
            curr = curr->next;
            
        }
        
        while(!st.empty())
        {
            curr = st.top();
            st.pop();
            tail->next = curr;
            curr->prev = tail;
            while(curr!=NULL)
            {
                if(curr->child!=NULL) //this check should be there as it may contain child nodes
                {
                    if(curr->next!=NULL)
                  {
                        st.push(curr->next);
                        curr->next->prev=NULL;
                    }
                    curr->next = curr->child;
                    curr->next->prev = curr;
                    curr->child = NULL;
                }
                tail=curr;
                curr=curr->next;
            }
            
        }
        return head;
    }
};
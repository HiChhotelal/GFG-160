class Solution {
  public:
    Node* reverseList(struct Node* head) {
        Node* prev = NULL; 
        Node* next = NULL; 
        Node* curr = head; 
        
        while(curr){
            next  = curr->next; 
            curr->next = prev; 
            prev = curr; 
            curr = next; 
        }
        
        return prev; 
    }
};
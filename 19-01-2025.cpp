class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // Your code here
         if (!head || k == 0) {  
            return head;
        }

        Node* tail = head;
        int length = 1;
        while (tail->next) {
            tail = tail->next;
            length++;
        }

      
        k = k % length;
        if (k == 0) {  
            return head;
        }

        Node* prev = nullptr;
        Node* current = head;
        for (int i = 0; i < k; i++) {
            prev = current;
            current = current->next;
        }

        prev->next = nullptr; 
        tail->next = head;     
        head = current;        

        return head;
    }
};
class Solution {
  public:
    Node* deleteMid(Node* head) {
        if (!head) return nullptr;
        if (!head->next) 
        { 
            delete head;
            return nullptr;
        }
        Node* fast=head;
        Node* slow=head;
        Node* prev=nullptr;
        while(fast && fast->next){
           prev=slow;
           slow = slow->next;
           fast=fast->next->next;
        }
        prev->next=slow->next;
        delete slow;
        return head;
    }
};

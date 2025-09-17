class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t1= l1;
        ListNode *t2= l2;
        
        while(t1!=nullptr and t2!=nullptr){
            t1->val=t1->val+t2->val;
            t1=t1->next;
            t2=t2->next;
        }
        if(t1==nullptr){
            t1=l1;
            while(t1->next !=nullptr){
                t1=t1->next;

            }
                t1->next=t2;

            
        }
        t1=l1;
        while(t1!=nullptr){
            if(t1->val>9) {
                if(t1->next==nullptr){
                    t1->next=new ListNode(1);
                }
                else
                t1->next->val+=1;
                 t1->val=(t1->val)%10;   
            }
            t1=t1->next;
           
        }
        return l1;
    }
};

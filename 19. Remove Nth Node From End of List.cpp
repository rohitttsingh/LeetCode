class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
            if(head==NULL) return NULL;
            ListNode *first = head;
            ListNode *second = head;
            
            for(int i=0;i<n;i++){
                first=first->next;
                
            }
                
                if(first==NULL){
                    ListNode *temp = head->next;
                    head->next = NULL;
                    delete head;
                    return temp;
                
            }
        while(first->next){
            first=first->next;
            second=second->next;
        }
        
        ListNode *temp = second->next;
        second->next = temp->next;
        delete temp;
        
        return head;

        }
    
};

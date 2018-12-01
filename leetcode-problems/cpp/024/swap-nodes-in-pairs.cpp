class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;

        ListNode* prev = NULL;
        ListNode* first = head;
        ListNode* secnd = first->next;
        
        head = secnd;
        
        first->next = secnd->next;
        secnd->next = first;
        prev = first;
        
        while(prev->next!=NULL  && prev->next->next!=NULL){
            first= prev->next;
            secnd= prev->next->next;
            
            first->next = secnd->next;
            secnd->next = first;
            prev ->next = secnd;
            prev = first;
            
        }
        
        return head;
    }
};
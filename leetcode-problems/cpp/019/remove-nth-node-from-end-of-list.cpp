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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n<1 || head == NULL)return head;
        if(head->next==NULL && n == 1) return NULL;
        if(head->next==NULL && n > 1) return head;
        stack<ListNode*> visited;
        stack<ListNode*> saved;
        while(head!=NULL){
            visited.push(head);
            head = head->next;
        }
        
        while(n>0){
            saved.push(visited.top());
            visited.pop();
            n--;
        }
        
        saved.pop();
        
        if (!visited.empty())
            visited.top()->next = (saved.size()>0?saved.top():NULL);
        
        while(!visited.empty()){
            saved.push(visited.top());
            visited.pop();
        }
        return saved.top();        
        
    }
};
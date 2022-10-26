/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode *mid ){
        ListNode* temp=NULL;
        ListNode* prev=NULL;
        ListNode* curr=mid;
        
        while(curr!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        
        return prev;
    }
    
    ListNode* midd(ListNode *head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return slow;
    }
    bool isPalindrome(ListNode* head) {
        
        ListNode * m= midd(head);
        ListNode *n= reverse(m->next);
        
        while(n!=NULL){
            if(n->val!=head->val){
                return false;
            }
            head=head->next;
            n=n->next;
        }
        return true;
    }
};
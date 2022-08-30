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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        ListNode *temp2 = head;
        int i=0;
        while(i<n){
            temp = temp->next;
            i++;
        }
        
        if(temp==NULL){
            head=head->next;
            return head;
        }
        
        while(temp->next!=NULL){
            temp=temp->next;
            temp2=temp2->next;
        }
        temp2->next=temp2->next->next;
        
        return head;
    }
};
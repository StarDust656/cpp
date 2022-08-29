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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL)
            return NULL;
        
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* e=even;
        ListNode* o=odd;
        
        while(odd->next!=NULL && even->next!=NULL ){
            odd->next=odd->next->next;
            odd=odd->next;
            even->next=even->next->next;
            even=even->next;
        }
      odd->next=e;
        
        return o;
    }
};
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *m= headA;
        ListNode *n= headB;
        int f=0,e=0;
        while(m!=n ){
            m=m->next;
            n=n->next;
            if(f==0){
            if(m==NULL){
                m=headB;
                f=1;
                }
            }
            
            if(e==0){
            if(n==NULL){
                n=headA;
                e=1;
            }
            }
            
            if(m==n)
                return m;
            
            
        }
        return m;
    }
};
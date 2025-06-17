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
        if(headA==headB)
                return headA;
        int l1=0;
        int l2=0;
        ListNode* t=headA;
        while(t!=NULL)
        {
            t=t->next;
            l1++;
        }
        t=headB;
        while(t!=NULL)
        {
            t=t->next;
            l2++;
        }
        if(l1>l2)
        {
            int diff=l1-l2;
            while(diff--)
            {
                headA=headA->next;
            }
        }
        else
        {
            int diff=l2-l1;
            while(diff--)
            {
                headB=headB->next;
            }
        }
        if(headA==headB)
                return headA;
        cout<<headA->val<<" "<<headB->val;
        while(headA!=headB)
        {
            
            headA=headA->next;
            headB=headB->next;
            if(headA==headB)
                return headA;
        }
        return nullptr;

    }
};
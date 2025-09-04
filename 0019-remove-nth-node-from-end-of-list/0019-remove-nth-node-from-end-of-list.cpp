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
    ListNode* removeNthFromEnd(ListNode* head, int k) {
        ListNode dum(0,head);
        ListNode* slow=&dum;
        ListNode* fast=&dum;
        for(int i=0;i<k;i++){
            fast=fast->next;
        }
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* del=slow->next;
        slow->next=del->next;
        delete del;
        return dum.next;
    }
};
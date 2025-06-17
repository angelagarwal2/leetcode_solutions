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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *prev=nullptr;
        ListNode *curr=head;
        ListNode *nextptr;
        int c=0;

        ListNode *temp=head;
        int length=0;
        while(temp!=nullptr&&length<k)
        {
            temp=temp->next;
            length++;
        }
        if(length<k)
        return head;
        while(curr!=nullptr&&c<k)
        {
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
            c++;
        }
        if(nextptr!=nullptr)
        {
            head->next=reverseKGroup(nextptr,k);
        }
        return prev;
    }
};
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
    ListNode* deleteDuplicates(ListNode* head) {
        /*ListNode *curr=head;
        while(curr!=nullptr)
        {
            ListNode *prev=curr;
            ListNode *temp=curr->next;
            while(temp!=nullptr)
            {
                if(curr->val==temp->val)
                {
                    prev->next=temp->next;
                    delete temp;
                    temp=prev->next;
                }
                else{
                    prev=temp;
                    temp=temp->next;
                }
            }
            curr=curr->next;
        }
        return head;*/
if(head==nullptr)
return head;
ListNode* temp=head;
        while(temp->next!=nullptr)
        {
            if(temp->val==temp->next->val)
            {
                ListNode* t=temp->next;
                temp->next=t->next;
                delete t;
            }
            else
            temp=temp->next;
            }
return head;
    }
};
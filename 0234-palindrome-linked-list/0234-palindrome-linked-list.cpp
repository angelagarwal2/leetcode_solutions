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
ListNode* revnode(ListNode *temp)
    {
        ListNode *prev=nullptr;
        ListNode *curr=temp;
        ListNode *nextptr;
        while(curr!=nullptr)
        {
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
         if(head==nullptr||head->next==nullptr)
        {
            return true;
        }
        //to find the middle
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast->next!=nullptr&&fast->next->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        //reverse the second half 
        ListNode *secondhalf=revnode(slow->next);
        //compare both the halves
        ListNode *firsthalf=head;
        ListNode *temp=secondhalf;
        bool palindrome=true;
        while(temp!=nullptr)
        {
            if(temp->val!=firsthalf->val)
            {
                palindrome=false;
                break;
            }
            temp=temp->next;
            firsthalf=firsthalf->next;
        }
        return palindrome;
    }
};
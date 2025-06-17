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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
        return head;
        else{
            ListNode d(0);
            d.next=head;
            ListNode *prev=&d;
            while(prev->next!=nullptr&&prev->next->next!=nullptr)
            {
                ListNode *first=prev->next;
                ListNode *second=first->next;
                first->next=second->next;
                second->next=first;
                prev->next=second;
                prev=first;
            }
            return d.next;
        }
    }
};
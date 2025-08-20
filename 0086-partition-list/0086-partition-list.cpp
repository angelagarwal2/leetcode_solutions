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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp=head;
    ListNode h1(0);
    ListNode h2(0);
    ListNode* dum1=&h1;
    ListNode* dum2=&h2;
    while(temp){
        if(temp->val<x){
            dum1->next=temp;
            dum1=dum1->next;
        }
        else{
            dum2->next=temp;
            dum2=dum2->next;
        }
        temp=temp->next;
    }
    dum2->next=NULL;
    dum1->next=h2.next;
    return h1.next;
    }
};
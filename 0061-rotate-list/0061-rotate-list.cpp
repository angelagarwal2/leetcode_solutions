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
ListNode* findnthnode(ListNode* temp, int k){
    int c=1;
    while(temp!=nullptr)
    {
        if(c==k) return temp;
        c++;
        temp=temp->next;
    }
    return temp;
}
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr) return head;
        int len=1;
        ListNode* tail=head;
        while(tail->next!=nullptr)
        {
            len++;
            tail=tail->next;
        }
        if(k%len==0) return head;
        k=k%len;
        tail->next=head;
        ListNode* nextnthnode=findnthnode(head,len-k);
        head=nextnthnode->next;
        nextnthnode->next=nullptr;
        return head;
    }
};
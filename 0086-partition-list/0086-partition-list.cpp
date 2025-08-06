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
        vector<int> l,r;
        ListNode* t=head;
        while(t!=NULL){
            if(t->val < x)
            l.push_back(t->val);
            else 
            r.push_back(t->val);
            t=t->next;
        }
        t=head;
        int i=0;
        int j=0;
        while(t){
            if(i<l.size())
            t->val=l[i++];
            else 
            t->val=r[j++];
            t=t->next;
        }
        return head;
    }
};
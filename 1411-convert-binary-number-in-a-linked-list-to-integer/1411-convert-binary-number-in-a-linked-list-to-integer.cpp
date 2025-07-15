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
    int getDecimalValue(ListNode* head) {
        int res=0;
        while(head!=nullptr)
        {
            res=(res<<1)|head->val;  //multiply res by 2 each time and then add with head->val
            head=head->next;
        }
        return res;
    }
};
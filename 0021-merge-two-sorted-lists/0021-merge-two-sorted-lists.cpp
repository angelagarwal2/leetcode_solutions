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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dum;
        ListNode *l3=&dum;
        if(list1==nullptr&&list2==nullptr)
        return nullptr;
        else if(list1==nullptr)
        return list2;
        else if(list2==nullptr)
        return list1;
        else
        { 
            while(list1!=nullptr&&list2!=nullptr)
            {
                if(list1->val<list2->val)
                {
                    l3->next=list1;
                    list1=list1->next;
                }
                else
                {
                    l3->next=list2;
                    list2=list2->next;
                }
                l3=l3->next;
            }
            if(list1!=nullptr)
            {
                l3->next=list1;
            }
            else
            {
                l3->next=list2;
            }
        }
        return dum.next;
    }
};
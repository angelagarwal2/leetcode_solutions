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
       ListNode dummy(0, head); // Dummy node before head
        ListNode* first = &dummy;
        ListNode* second = &dummy;

        // Move first k+1 steps ahead
        for (int i = 0; i <= k; ++i) {
            if (first != nullptr)
                first = first->next;
        }

        // Move both until first reaches the end
        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }

        // Delete the k-th node from the end
        ListNode* nodeToDelete = second->next;
        second->next = second->next->next;
        delete nodeToDelete;

        return dummy.next;
    }
};
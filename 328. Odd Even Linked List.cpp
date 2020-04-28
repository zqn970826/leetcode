/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// 奇偶链表
// 
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (NULL == head || NULL == head->next)
        {
            return head;
        }
        ListNode *odd = head, *even = head->next, *curr = even->next, *evenhead = even;
        head = odd;
        while (curr && curr->next)
        {
            odd->next = curr;
            odd = odd->next;
            even->next = curr->next;
            even = even->next;
            curr = curr->next->next;
        }
        if (curr)
        {
            odd->next = curr;
            odd = odd->next;
        }
        odd->next = evenhead;
        even->next = NULL;
        return oddhead;
    }
};
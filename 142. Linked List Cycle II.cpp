// 快慢指针
// fast = 2*slow
// 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        int flag = 0;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            fast = head;
            while (fast != slow)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return fast;
        }
        else
        {
            return NULL;
        }
    }
};
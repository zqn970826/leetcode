// Easy
// 删除指定节点
// 思路：数据前移
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
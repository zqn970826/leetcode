// Easy
// 循环：头插法
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *s = NULL, *curr;
    while (head)
    {
        curr = head->next;
        head->next = s;
        s = head;
        head = curr;
    }
    return s;
}

// 递归
struct ListNode* reverseList(struct ListNode* head){
	if(NULL==head || NULL == head->next)
    {
        return head;
    }
	struct ListNode *p = head->next;
	head->next = NULL;
	struct ListNode *newhead = reverseList(p);
	p->next = head;
	return newhead;
}
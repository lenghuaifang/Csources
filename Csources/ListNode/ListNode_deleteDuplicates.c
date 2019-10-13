struct ListNode
{
	int val;
	struct ListNode *next;
}

struct ListNode* deleteDuplicates(struct ListNode* head)
{
	struct ListNode *p=head;
	
	if(!head||!head->next)
		return head;
	
	while(p->next)
	{
		if(p->val==p->next->val)
			p->next=p->next->next;
		else
			p=p->next;
	}
	
	return head;
}
	
struct ListNode* deleteDuplicates(struct ListNode* head)
{
	struct ListNode *p=head;
	if(!head||!head->next)
		return head;
	while(p->next)
	{
		if(p->val==p->next->val)
			p->next=p->next->next;
		else
			p=p->next;
	}
	return head;
}

struct ListNode* deleteDuplicates(struct ListNode* head)
{
	if(!head||!head->next)
		return head;
	struct ListNode *cur=head;
	
	while(cur->next)
	{
		if(cur->val==cur->next->val)
			cur->next=cur->next->next;
		else
			cur=cur->next;
	}
	return head;
}


struct ListNode*  deleteDuplicates(struct ListNode *head)
{
	if(!head||!head->next)
		return head;
	struct ListNode *cur=head;
	while(cur->next)
	{
		if(cur->val==cur->next->val)
			cur->next=cur->next->next;
		else
			cur=cur->next;
	}
	return head;
}































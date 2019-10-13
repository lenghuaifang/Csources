struct ListNode
{
	int val;
	struct ListNode *next;
}

struct ListNode* swapPairs(struct ListNode* head)
{
	if(!head||!head->next)
		return head;
	
	struct ListNode *newhead=head->next, *cur=head;
	
	while(cur&&cur->next)
	{
		struct ListNode *tmp=cur;
		cur=cur->next;
		tmp->next=cur->next;
		cur->next=tmp;
		cur=tmp->next;
		if(cur&&cur->next)
			tmp->next=cur->next;
	}
	return newhead;
}


struct ListNode* swapPairs(struct ListNode *head)
{
	if(!head||!head->next)
		return head;
	
	struct ListNode *newhead=head->next, *cur=head;
	
	while(cur&&cur->next)
	{
		struct ListNode *tmp=cur;
		cur=cur->next;
		tmp->next=cur->next;
		cur->next=tmp;
		cur=tmp->next;
		if(cur&&cur->next)
			tmp->next=cur->next;
	}
	return newhead;
}
		
		
struct ListNode* swapPairs(struct ListNode *head)
{
		if(!head||!head->next)
			return head;
		
		struct ListNode *newhead=head->next, *cur=head;
		while(cur&&cur->next)
		{
			struct ListNode *tmp=cur;
			cur=cur->next;
			tmp->next=cur->next;
			cur->next=tmp;
			cur=tmp->next;
			if(cur&&cur->next)
				tmp->next=cur->next;
		}
		return newhead;
}
		
struct ListNode* swapPairs(struct ListNode *head)
{
	if(!head||!head->next)
		return head;
	
	struct ListNode *newhead=head->next, *cur=head;
	while(cur&&cur->next)
	{
		struct ListNode *tmp=cur;
		cur=cur->next;
		tmp->next=cur->next;
		cur->next=tmp;
		cur=tmp->next;
		if(cur&&cur->next)
		{
			tmp->next=cur->next;
		}
	}
		return newhead;
}
		
		
		
		
		
		
		
		
		
		
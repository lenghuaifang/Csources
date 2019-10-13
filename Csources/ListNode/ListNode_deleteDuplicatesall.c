struct ListNode
{
	int val;
	struct ListNode *next;
}

struct ListNode* deleteDuplicates(struct ListNode* head)
{
	
	if(!head||!head->next)
		return head;
	
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *prev=prehead, *cur=head;
	prehead->next=head;
	
	while(cur)
	{
		while(cur->next&&(cur->val==cur->next->val))
		{
			cur=cur->next;
		}
		
		if(prev->next==cur)
			prev=prev->next;
		else
			prev->next=cur->next;
		cur=cur->next;
	}
	return prehead->next;
}

struct ListNode* deleteDuplicates(struct ListNode *head)
{
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *prev=prehead, *cur=head;
	prehead->next=head;
	
	while(cur)
	{
		while(cur->next&&(cur->val==cur->next->val))
		{
			cur=cur->next;
		}
		
		if(pre->next==cur)
			pre=pre->next;
		else
			pre->next=cur->next;
		cur=cur->next;
	}
	return prehead->next;
}

struct ListNode* deleteDuplicates(struct ListNode *head)
{
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *prev=prehead, *cur=head;
	prev->next=head;
	
	while(cur)
	{
		if((cur->next)&&(cur->val==cur->next->val))
			cur=cur->next;
		if(prev->next==cur)
			prev=prev->next;
		else
			prev->next=cur->next;
		cur=cur->next;
	}
	return prehead->next;
}





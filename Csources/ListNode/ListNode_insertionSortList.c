struct ListNode 
{
	int val;
	struct ListNode *next;
}

struct ListNode* insertionSortList(struct ListNode* head)
{
	if(!head||!head->next)
		return head;
	
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
	prehead->val=head->val-1;
	
	struct ListNode *last=prehead, *start=head;
	
	while(start)
	{
		struct ListNode *next=start->next;
		
		if(last->val<start->val)
		{
			last->next=start;
			last=start;
		}
		else
		{
			struct ListNode *prev=prehead;
			while(prev->next&&(prev->next->val<start->val))
				prev=prev->next;
			start->next=prev->next;
			prev->next=start;
		}
		
		start=next;
	}
	last->next=NULL;
	
	return prehead->next;
}
		
struct ListNode* insertionSortList(struct ListNode* head)
{
	if(!head||!head->next)
		return head;
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
	prehead->val=head->val-1;

	struct ListNode *last=prehead, *start=head;
	while(start)
	{
		struct ListNode *next=start->next;
		if(last->val<start->val)
		{
			last->next=start;
			last=last->next;
		}
		else
		{
			struct ListNode *pre=prehead;
			if(pre->next&&(pre->next->val<start->val))
				pre=pre->next;
			start->next=pre->next;
			pre->next=start;
		}
		start=next;
	}
	last->next=NULL;
	return prehead->next;
}
			
		
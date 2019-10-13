struct ListNode
{
      int val;
      struct ListNode *next;
};

struct ListNode* removeElements(struct ListNode* head, int val)
{
	
		struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
		struct ListNode *prev=prehead, *cur=head;
		prehead->next=head;
		
		while(cur)
		{
			if(cur->val==val)
				prev->next=cur->next;
			else
				prev=cur;
			cur=cur->next;
		}
		
		return prehead->next;
}
	
struct ListNode* removeElements(struct ListNode* head, int val)
{
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *prev=prehead, *cur=head;
	prehead->next=head;
	while(cur)
	{
		if(cur->val==val)
			prev->next=cur->next;
		else
			prev=cur;
		cur=cur->next;
	}
	return prehead->next;
}
	
	
struct ListNode* removeeles(struct ListNode *head, int val)
{
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *prev=prehead, *cur=head;
	prehead->next=head;
	
	while(cur)
	{
		if(cur->val==val)
			prev->next=cur->next;
		else
			prev=cur;
		cur=cur->next;
	}
	return prehead->next;
}

	
struct ListNode
{
	int val;
	struct ListNode *next;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *prev=prehead;
	int extra=0;
	
	while(l1||l2||extra)
	{
		if(l1)
		{
			extra=extra+l1->val;
			l1=l1->next;
		}
		if(l2)
		{
			extra=extra+l2->val;
			l2=l2->next;
		}
		struct ListNode *tmp=calloc(1,sizeof(struct ListNode));
		tmp->val=extra%10;
		prev->next=tmp;
		prev=prev->next;
		extra=extra/10;
	}
	return prehead->next;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *prev=prehead;
	int extra=0;
	while(l1||l2||extra)
	{
		if(l1)
		{
			extra=l1->val+extra;
			l1=l1->next;
		}
		if(l2)
		{
			extra=l2->val+extra;
			l2=l2->next;
		}
		struct ListNode *tmp=calloc(1,sizeof(struct ListNode));
		tmp->val=extra%10;
		extra=extra/10;
		prev->next=tmp;
		prev=prev->next;
	}
	return prehead->next;
}
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
struct ListNode
{
	int val;
	struct ListNode *next;
}

struct ListNode* reverselist(struct ListNode *head)
{
	struct ListNode *newhead=NULL;
	
	while(head)
	{
		struct ListNode *next=head->next;
		head->next=newhead;
		newhead=head;
		head=next;
	}
	
	return newhead;
}
	
	
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *prev=prehead;
	int extra=0;
	
	l1=reverselist(l1);
	l2=reverselist(l2);
	
	while(l1||l2||extra)
	{
		struct ListNode *tmp=calloc(1,sizeof(struct ListNode));
		if(l1)
		{
			extra+=l1->val;
			l1=l1->next;
		}
		if(l2)
		{
			extra+=l2->val;
			l2=l2->next;
		}
		tmp->val=extra%10;
		extra/=10;
		prev->next=tmp;
		prev=tmp;
	}
	
	return reverselist(prehead->next);
}
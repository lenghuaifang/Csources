struct ListNode 
{
	int val;
	ListNode *next;
}

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
	if(l1==NULL)
		return l2;
	
	if(l2==NULL)
		return l1;
	
	if(l1->val<l2->val)
	{
		l1->next=mergeTwoLists(l1->next,l2);
		return l1;
	}
	else
	{
		l2->next=mergeTwoLists(l1,l2->next);
		return l2;
	}
	
}

struct ListNode* mergeTwoLists(struct ListNode *l1, struct ListNode *l2)
{
	if(l1==NULL)
		return l2;
	if(l2==NULL)
		return l1;
	
	if(l1->val<l2->val)
	{
		l1->next=mergeTwoLists(l1->next,l2);
		return l1;
	}
	else
	{
		l2->next=mergeTwoLists(l1,l2->next);
		return l2;
	}
}

struct ListNode* mergeTwoLists(struct ListNode *l1, struct ListNode *l2)
{
	if(l1==NULL)
		return l2;
	
	if(l2==NULL)
		return l1;
	
	if(l1->val<l2->val)
	{
		l1->next=mergeTwoLists(l1->next,l2);
		return l1;
	}
	else
	{
		l2->next=mergeTwoLists(l1,l2->next);
		return l2;
	}
}
		
struct ListNode* mergeTwoLists(struct ListNode *l1, struct ListNode *l2)
{
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *prev=prehead;
	while(l1&&l2)
	{
		if(l1->val<l2->val)
		{
			prev->next=l1;
			l1=l1->next;
		}
		else
		{
			prev->next=l2;
			l2=l2->next;
		}
		prev=prev->next;
	}
	
	prev->next=(l1)?l1:l2;
	return prehead->next;
}
		
struct ListNode* mergeTwoLists(struct ListNode *l1, struct ListNode *l2)
{
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode ));
	struct ListNode *prev=prehead;
	
	while(l1&&l2)
	{
		if(l1->val<l2->val)
		{
			prev->next=l1;
			l1=l1->next;
		}
		else
		{
			prev->next=l2;
			l2=l2->next;
		}
		prev=prev->next;
	}
	
	prev->next=l1?l1:l2;
	return prehead->next;
}
		
struct ListNode* mergeTwoLists(struct ListNode *l1, struct ListNode *l2)
{
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode ));
	struct ListNode *prev=prehead;
	while(l1&&l2)
	{
		if(l1->val<l2->val)
		{
			prev->next=l1;
			l1=l1->next;
		}
		else
		{
			prev->next=l2;
			l2=l2->next;
		}
		prev=prev->next;
	}
	prev->next=l1?l1:l2;
	return prehead->next;
}
	
		
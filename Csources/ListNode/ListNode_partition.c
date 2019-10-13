struct ListNode 
{
	int val;
	struct ListNode *next;
}

struct ListNode* partition(struct ListNode* head, int x)
{
	struct ListNode *lprehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *gprehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *lprev=lprehead, *gprev=gprehead, *cur=head;
	
	while(cur)
	{
		if(cur->val<x)
		{
			lprev->next=cur;
			lprev=cur;
			cur=cur->next;
		}
		else
		{
			gprev->next=cur;
			gprev=cur;
			cur=cur->next;
		}
	}
	
	lprev->next=gprehead->next;
	gprev->next=NULL;
	
	return lprehead->next;
}
	
struct ListNode* partition(struct ListNode *head, int x)
{
	struct ListNode *lprehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *gprehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *lprev=lprehead, *gprev=gprehead, *cur=head;
	
	while(cur)
	{
		if(cur->val<x)
		{
			lprev->next=cur;
			lprev=cur;
		}
		else
		{
			gprev->next=cur;
			gprev=cur;
		}
		cur=cur->next;
	}
	lprev->next=gprehead->next;
	gprev->next=NULL;
	return lprehead->next;
}
struct ListNode* partition(struct ListNode *head, int x)
{
	struct ListNode *lprehead=calloc(1,sizeof(struct ListNode ));
	struct ListNode *hprehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *lprev=lprehead, *hprev=hprehead, *cur=head;
	
	while(cur)
	{
		if(cur->val<x)
		{
			lprev->next=cur;
			lprev=cur;
		}
		else
		{
			hprev->next=cur;
			hprev=cur;
		}
		cur=cur->next;
	}
	lprev->next=hprehead->next;
	hprev->next=NULL;
	return lprehead->next;
}




















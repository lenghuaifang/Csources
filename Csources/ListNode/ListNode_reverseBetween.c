struct ListNode 
{
	int val;
	struct ListNode *next;
}

struct ListNode* reverseBetween(struct ListNode* head, int m, int n)
{
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *prev=prehead;
	prev->next=head;
	for(int i=0;i<m-1;i++)
	{
		prev=prev->next;
	}
	
	struct ListNode *start=prev->next, *then=start->next;
	
	for(int i=0;i<n-m;i++)
	{
		start->next=then->next;
		then->next=prev->next;
		prev->next=then;
		then=start->next;
	}
	
	return prehead->next;
}

struct ListNode *reverseBetween(struct ListNode* head, int m, int n)
{
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *prev=prehead;
	prev->next=head;
	for(int i=0;i<m-1;i++)
		prev=prev->next;
	struct ListNode *start=prev->next, *then=start->next;
	for(int i=0;i<n-m;i++)
	{
		start->next=then->next;
		then->next=prev->next;
		prev->next=then;
		then=start->next;
	}
	return prehead->next;
}

struct ListNode *reverseBetween(struct ListNode *head,int m, int n)
{
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *prev=prehead;
	prev->next=head;
	for(int i=0;i<m-1;i++)
		prev=prev->next;
	
	struct ListNode *start=prev->next, *then=start->next;
	for(int i=0;i<n-m;i++)
	{
		start->next=then->next;
		then->next=prev->next;
		prev->next=then;
		then=start->next;
	}
	return prehead->next;
}
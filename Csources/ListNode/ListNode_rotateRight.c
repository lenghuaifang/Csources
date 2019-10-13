struct ListNode
{
	int val;
	struct *next;
}

struct ListNode* rotateRight(struct ListNode* head, int k)
{
	if(!head||!head->next)
		return head;
	int len=0;
	struct ListNode *cur=head, *prev;
	while(cur)
	{
		len++;
		prev=cur;
		cur=cur->next;
	}
	k=(len-k%len)%len;
	if(k==0)
		return head;
	prev->next=head;
	for(int i=0;i<k;i++)
	{
		prev=head;
		head=head->next;
	}
	prev->next=NULL;
	return head;
}


struct ListNode* rotateRight(struct ListNode *head, int k)
{
	if(!head||!head->next)
		return head;
	int len=0;
	struct ListNode *cur=head, *prev;
	while(cur)
	{
		prev=cur;
		cur=cur->next;
		len++;
	}
	k=(len-k%len)%len;//Important
	if(k==0)
		return head;
	prev->next=head;
	for(int i=0;i<k;i++)
	{
		prev=head;
		head=head->next;
	}
	return head;
}


		
		
		
		
		
		
		
		
		
		
		
		
		
	
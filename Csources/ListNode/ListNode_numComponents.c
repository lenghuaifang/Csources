struct ListNode 
{
	int val;
	struct ListNode *next;
}

int numComponents(struct ListNode* head, int* G, int GSize)
{
	
	int tmp[10000]={0};
	int count=0;
	for(int i=0;i<GSize;i++)
		tmp[G[i]]++;
	while(head)
	{
		if((tmp[head->val]>0)&&(!head->next||tmp[head->next->val]==0))
			count++;
		head=head->next;
	}
	return count;
}

int numComponents(struct ListNode* head, int* G, int GSize)
{
	struct ListNode *cur=head;
	int tmp[10000]={0};
	for(int i=0;i<GSize;i++)
		tmp[G[i]]++;
	while(cur)
	{
		if((tmp[cur->val]>0)&&(!cur->next||tmp[cur->next->val]==0))
			count++;
		cur=cur->next;
	}
	return count;
}



























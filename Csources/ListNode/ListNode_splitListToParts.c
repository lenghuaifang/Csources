struct ListNode 
{
	int val;
	struct ListNode *next;
}

struct ListNode** splitListToParts(struct ListNode* root, int k, int* returnSize)
{
	struct ListNode *cur=root;
	int len=0;
	
	while(cur)
	{
		len++;
		cur=cur->next;
	}
	
	int n=len/k, r=len%k;
	struct ListNode **result=calloc(k,sizeof(struct ListNode *));
	cur=root;
	
	for(int i=0;i<k&&cur;i++)
	{
		result[i]=cur;
		for(int j=1;j<n+(i<r);j++)
			cur=cur->next;
		
		struct ListNode *next=cur->next;
		cur->next=NULL;
		cur=next;
	}
	return result;
}

struct ListNode** splitListToParts(struct ListNode* head, int k, int* returnSize)
{
	
	struct ListNode *cur=head;
	int len=0;
	while(cur)
	{
		cur=cur->next;
		len++;
	}
	int n=len/k, r=len%k;
	cur=head;
	struct ListNode **result=calloc(k,sizeof(struct ListNode *));
	
	for(int i=0;i<k&&cur;i++)
	{
		result[i]=cur;
		for(int j=1;j<n+(i<r);j++)
			cur=cur->next;
		
		struct ListNode *next=cur->next;
		cur->next=NULL;
		cur=next;
	}
	return result;
}

struct ListNode** splitListToParts(struct ListNode *head, int k, int *returnSize)
{
	struct ListNode *cur=head;
	int len=0;
	while(cur)
	{
		cur=cur->next;
		len++;
	}
	
	int n=len/k, r=len%k;
	cur=head;
	struct ListNode** result=calloc(k,sizeof(struct ListNode *));
	for(int i=0;i<k&&cur;i++)
	{
		result[i]=cur;
		for(int j=1;j<n+i<r;j++)
			cur=cur->next;
		struct ListNode *next=cur->next;
		cur->next=NULL;
		cur=next;
	}
	return result;
}




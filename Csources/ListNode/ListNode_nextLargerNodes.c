struct ListNode 
{
	int val;
	struct ListNode *next;
}

int* nextLargerNodes(struct ListNode* head, int* returnSize)
{
	struct ListNode *cur=head;
	int len=0, k=0;
	
	while(cur)
	{
		len++;
		cur=cur->next;
	}
	
	*returnSize=len;
	
	int *result=calloc(len,sizeof(int));	//restore the data
	int *index=calloc(len,sizeof(int));		//the stack of index  k-1 has the first data
	
	cur=head;
	for(int i=0;i<len;i++)
	{
		result[i]=cur->val;
		cur=cur->next;
	}
	
	for(int i=0;i<len;i++)
	{
		while((k>0)&&(result[index[k-1]]<result[i]))
			result[index[--k]]=result[i];
		index[k++]=i;
	}
	
	while(k)
	{
		result[index[--k]]=0;
	}
	return result;
}
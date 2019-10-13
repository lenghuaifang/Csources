struct ListNode 
{
	int val;
	struct ListNode *next;
}

struct ListNode *detectCycle(struct ListNode *head)
{
	struct ListNode *fast=head, *slow=head;
	int flag=0;
	
	while(fast&&fast->next)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(slow==fast)
		{
			flag=1;
			break;
		}
	}
	fast=head;
	if(flag==1)
	{
		while(fast!=slow)
		{
			fast=fast->next;
			slow=slow->next;
		}
		return fast;
	}
	return NULL;
}

struct ListNode* detectCycle(struct ListNode *head)
{
	struct ListNode *fast=head, slow=head;
	int flag=0;
	while(fast&&fast->next)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow)
		{
			flag=1;
			break;
		}
	}
	fast=head;
	if(flag==1)
	{
		while(fast!=slow)
		{
			fast=fast->next;
			slow=slow->next;
		}
		return fast;
	}
	return NULL;
}

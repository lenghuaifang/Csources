struct ListNode
{
	int val;
	struct ListNode *next;
}

struct ListNode* removeNthFromEnd(struct ListNode* head,int n)
{
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *fast=prehead, *slow=prehead;
	slow->next=head;
	
	for(int i=0;i<=n;i++)
	{
		fast=fast->next;
	}
	
	while(fast)
	{
		fast=fast->next;
		slow=slow->next;
	}
	
	slow->next=slow->next->next;
	
	return prehead->next;
}

struct ListNode* removeNtbFromEnd(struct ListNode* head, int n)
{
	struct *prehead=calloc(1,sizeof(struct ListNode ));
	struct *fast=prehead, *slow=prehead;
	for(int i=0;i<=n;i++)
		fast=fast->next;
	while(fast)
	{
		fast=fast->next;
		slow=slow->next;
	}
	slow->next=slow->next->next;
	return prehead->next;
}

struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
	struct ListNode *fast=head, *slow=head;
	
	while(fast)
	{
		fast=fast->next;
		
		if(n--<0)
		{
			slow=slow->next;
		}
	}
	if(n>=0)
		head=head->next;
	else
		slow->next=slow->next->next;
	return head;
}
struct ListNode 
{
	int val;
	struct ListNode *next;
}


bool hasCycle(struct ListNode *head)
{
	struct ListNode *fast=head, *slow=head;
	
	while(fast&&fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		
		if(slow==fast)
			return true;
	}
	
	return false;
}
	
bool hascycle(struct ListNode *head)
{
	struct ListNode *fast=head, *slow=head;
	
	while(fast&&fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
			return true;
	}
	return false;
}

bool hasCycle(struct ListNode *head)
{
	struct ListNode *slow=head, *fast=head;
	while(fast&&fast->next)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow)
			return true;
	}
	return false;
}
































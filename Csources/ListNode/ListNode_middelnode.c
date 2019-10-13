struct ListNode
{
	int val;
	struct ListNode *next;
}

struct ListNode* middlenode(struct ListNode *head)
{
	struct ListNode *fast=head, *slow=head;
	
	while(fast&&fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	
	return slow;
	
}

struct ListNode* middlenode(struct ListNode* head)
{
	struct ListNode *slow=head, *fast=head;
	while(fast&&fast->next)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
}
		

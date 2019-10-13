struct ListNode 
{
	int val;
	struct ListNode *next;
}

struct ListNode* oddEvenList(struct ListNode* head)
{
	if(!head)
		return head;
	
	struct ListNode *odd=head, *even=head->next, *evenhead=head->next;
	
	while(even&&even->next)
	{
		odd->next=even->next;
		odd=odd->next;
		even->next=odd->next;
		even=odd->next;
	}
	odd->next=evenhead;
	
	return head;
}


struct ListNode* oddEvenList(struct ListNode *head)
{
	if(!head)
		return;
	struct ListNode *odd=head, *even=head->next, *evenhead=head->next;
	
	while(even&&even->next)
	{
		odd->next=even->next;
		odd=even->next;
		even->next=odd->next;
		even=odd->next;
	}
	odd->next=evenhead;
	return head;
}

























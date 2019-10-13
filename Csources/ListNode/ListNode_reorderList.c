struct ListNode 
{
	int val;
	struct ListNode *next;
}

void reorderList(struct ListNode* head)
{
	if(!head||!head->next||!head->next->next)
		return head;
	
	struct ListNode *fast=head, *slow=head;
	
	while(fast->next&&fast->next->next)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	
	struct ListNode *start=slow->next;
	struct ListNode *prev=slow;
	while(start->next)
	{
		struct ListNode *then=start->next;
		start->next=then->next;
		then->next=slow->next;
		slow->next=then;
	}
	
	struct ListNode *p1=head;
	struct ListNode *p2=prev->next;
	
	while(p1!=prev)
	{
		prev->next=p2->next;
		p2->next=p1->next;
		p1->next=p2;
		p1=p2->next;
		p2=prev->next;
	}
	
	return head;
}
void reorderList(struct ListNode *head)
{
	if(!head||!head->next||!head->next->next)
		return head;
	
	struct ListNode *fast=head, *slow=head;
	while(fast->next&&fast->next->next)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	
	struct ListNode *start=slow->next, *then=start->next, *prev=slow;
	while(then)
	{
		start->next=then->next;
		then->next=slow->next;
		slow->next=then;
		then=start->next;
	}
	
	struct ListNode *p1=head, *p2=prev->next;
	while(p1!=prev)
	{
		prev->next=p2->next;
		p2->next=p1->next;
		p1->next=p2;
		p1=p2->next;
		p2=prev->next;
	return head;
}
		
		















	
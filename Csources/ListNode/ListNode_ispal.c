struct ListNode
{
	int val;
	struct ListNode *next;
}
struct ListNode* reverselist(struct ListNode *head)
{
	
	struct ListNode *newhead=NULL;
	while(head)
	{
		struct ListNode *next=head->next;
		head->next=newhead;
		newhead=head;
		head=next;
	}
	return newhead;
}

bool isPalindrome(struct ListNode *head)
{
	
	if(!head||!head->next)
		return true;
	
	struct ListNode *fast=head, *slow=head, *prev=head;
	
	while(fast&&fast->next)
	{
		prev=slow;
		slow=slow->next;
		fast=fast->next->next;
	}
	prev->next=NULL;
	
	struct ListNode *halfhead=slow;
	
	if(fast)
		halfhead=slow->next;
	
    halfhead=reverselist(halfhead);
    
	while(head&&halfhead)
	{
		if(head->val!=halfhead->val)
			return false;
		head=head->next;
		halfhead=halfhead->next;
	}
	return true;
}
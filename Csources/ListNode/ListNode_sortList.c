struct ListNode 
{
	int val;
	struct ListNode *next;
}



struct ListNode* merge(struct ListNode *p1, struct ListNode* p2)
{
	struct ListNode *prehead=calloc(1,sizeof(struct ListNode));
	struct ListNode *prev=prehead;
	
	while(p1&&p2)
	{
		if(p1->val<p2->val)
		{
			prev->next=p1;
			p1=p1->next;
		}
		else
		{
			prev->next=p2;
			p2=p2->next;
		}
		prev=prev->next;
	}
	
	prev->next=p1?p1:p2;
	return prehead->next;
}
	
struct ListNode* sortList(struct ListNode* head)
{
	if(!head||!head->next)
		return head;
	
	struct ListNode *fast=head, *slow=head, *prev=NULL;
	
	while(fast&&fast->next)
	{
		prev=slow;
		slow=slow->next;
		fast=fast->next->next;
	}
	prev->next=NULL;
	
	return merge(sortList(head),sortList(slow));
}


struct ListNode* merge(struct ListNode* p1, struct ListNode *p2)
{
	struct ListNode *prehead=calloc(1,sizeof(ListNode));
	struct ListNode *prev=prehead;
	while(p1&&p2)
	{
		if(p1->val<p2->val)
		{
			prev->next=p1;
			p1=p1->next;
		}
		else
		{
			prev->next=p2;
			p2=p2->next;
		}
		prev=prev->next;
	}
	
	prev->next=p1?p1:p2;
	return prehead->next;
}
	

struct ListNode* sortList(struct ListNode *head)
{
	if(!head||!head->next)
		return head;
	
	struct ListNode *slow=head, *fast=head, *prev=NULL;
	while(fast&&fast->next)
	{
		prev=slow;
		slow=slow->next;
		fast=fast->next->next;
	}
	prev->next=NULL;
	return merge(sortList(head),sortList(slow));
}
		

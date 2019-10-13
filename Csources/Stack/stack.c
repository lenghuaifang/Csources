
int cur=0;
int n=0;
int *items;

void creatStack(int cap)
{
	items=calloc(n,sizeof(int));
	n=cap;
}

bool push(int item)
{
	if(cur==n)
		return false;
	
	arr[cur++]=item;
	return true;
}

int pop(void)
{
	if((cur-1)<0)
		return NULL;
	int tmp=arr[cur-1];
	cur--;
	return tmp;
}
	

void main()
{
	creatStack(10);
	
	push(2);
	int num=pop();
}

void createStack(int cap)
{
	n=cap;
	items=calloc(cap,sizeof(int));
}

bool push(int item)
{
	if(cur==n)
		return false;
	
	items[cur++]=item;
	return true;
}

int pop(void)
{
	if((cur-1)<0)
		return NULL;
	
	int tmp=items[cur-1];
	cur--;
	return tmp;
}
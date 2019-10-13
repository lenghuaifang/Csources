
int n=0;
int head=0;
int tail=0;
int *items;

void  createQuene(int cap)
{
	items=calloc(cap,sizeof(int));
	n=cap;
}

bool enquene(int item)
{
	if((tail+1)%n==head)
		return false;
	
	items[tail]=item;
	tail=(tail+1)%n;
	
	return true;
}

int dequene(void)
{
	if(head==tail)
		return NULL;
	int tmp=items[head];
	head=(head+1)%n;
	return tmp;
}

void main()
{
	createQuene(10);
	enquene(1);
	dequene();
}

void createQuene(int cap)
{
	n=cap;
	items=calloc(cap,sizeof(int));
}

bool enquene(int item)
{
	if((tail+1)%n==head)
		return false;
	
	items[tail]=item;
	tail=(tail+1)%n;
	return true;
}

int dequene(void)
{
	if(head==tail)
		return NULL;
	
	int tmp=items[head];
	head=(head+1)%n;
	
	return tmp;
}
	
	

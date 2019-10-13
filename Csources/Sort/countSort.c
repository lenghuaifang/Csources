void countSort(int *arr, int n)
{
	if(n<=1)
		return;
	
	int max=arr[0];
	
	for(int i=1;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	
	int *bottle=calloc(max+1,sizeof(int));
	
	for(int i=0;i<n;i++)
		bottle[arr[i]]++;
	
	for(int i=1;i<=max;i++)
		bottle[i]=bottle[i]+bottle[i-1];
	
	int *tmp=calloc(n,sizeof(int));
	
	for(int i=n-1;i>=0;i--)
	{
		int index=bottle[arr[i]]-1;
		
		tmp[index]=arr[i];
		bottle[arr[i]]--;
	}
	
	for(int i=0;i<n;i++)
		arr[i]=tmp[i];
}

void countSort(int *arr, int n)
{
	if(n<=1)
		return;
	
	int max=arr[0];
	
	for(int i=1;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	
	int *bottle=calloc(max+1,sizeof(int));
	
	for(int i=0;i<n;i++)
		bottle[arr[i]]++;
	
	for(int i=1;i<=max;i++)
		bottle[i]=bottle[i]+bottle[i-1];
	
	int *tmp=calloc(n,sizeof(int));
	
	for(int i=n-1;i>=0;i--)
	{
		int index=bottle[arr[i]]-1;
		tmp[index]=arr[i];
		bottle[arr[i]]--;
	}
	
	for(int i=0;i<n;i++)
		arr[i]=tmp[i];
}
	
void countSort(int *arr,int n)
{
	if(n<=1)
		return;
	
	int max=arr[0];
	
	for(int i=1;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	
	int *bottle=calloc(max+1,sizeof(int));
	
	for(int i=0;i<n;i++)
		bottle[arr[i]]++;
	
	for(int i=1;i<=max;i++)
		bottle[i]=bottle[i]+bottle[i-1];
	
	int *tmp=calloc(n,sizeof(int));
	
	for(int i=n-1;i>=0;i--)
	{
		int index=bottle[arr[i]]-1;
		tmp[index]=arr[i];
		bottle[arr[i]]--;
	}
	
	for(int i=0;i<n;i++)
		arr[i]=tmp[i];
}
	
void countSort(int *arr,int n)
{
	int max=arr[0];
	for(int i=1;i<n;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	
	int *bottle=calloc(max+1,sizeof(int));
	
	for(int i=0;i<n;i++)
		bottle[arr[i]]++;
	
	for(int i=1;i<=max;i++)
		bottle[i]=bottle[i]+bottle[i-1];
	
	int *tmp=calloc(n,sizeof(int));
	
	for(int i=n-1;i>=0;i--)
	{
		int index=bottle[arr[i]]-1;
		tmp[index]=arr[i];
		bottle[arr[i]]--;
	}
	for(int i=0;i<n;i++)
		arr[i]=tmp[i];
}

void countSort(int *arr,int n)
{
	int max=arr[0];
	for(int i=1;i<n;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	
	int *bottle=calloc(max+1,sizeof(int));
	
	for(int i=0;i<n;i++)
	{
		bottle[arr[i]]++;
	}
	
	for(int i=1;i<max+1;i++)
	{
		bottle[i]=bottle[i]+bottle[i-1];
	}
	
	int *tmp=calloc(n,sizeof(int));
	for(int i=n-1;i>=0;i--)
	{
		int index=bottle[arr[i]]-1;
		tmp[i]=arr[i];
		bottle[arr[i]]--;
	}
	
	for(int i=0;i<n;i++)
		arr[i]=tmp[i];
}


void countSort(int *arr,int n)
{
	int max=arr[0];
	for(int i=1;i<n;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	
	int *bottle=calloc(max+1,sizeof(int));
	for(int i=0;i<n;i++)
	{
		bottle[arr[i]]++;
	}
	
	for(int i=1;i<max+1;i++)
	{
		bottle[i]=bottle[i]+bottle[i-1];
	}
	
	int *tmp=calloc(n,sizeof(int));
	for(int i=n-1;i>=0;i--)
	{
		int index=bottle[arr[i]]-1;
		tmp[index]=arr[i];
		bottle[arr[i]]--;
	}
	for(int i=0;i<n;i++)
	{
		arr[i]=tmp[i];
	}
}
























	
	
	
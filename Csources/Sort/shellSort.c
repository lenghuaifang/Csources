
void shellSort(int *arr, int n)
{
	int h=1;
	
	while(h<n/3)
		h=3*h+1;
	
	while(h>=1)
	{
		for(int i=h;i<n;i++)
		{
			int j=i-h;
			int value=arr[i];
			for(;j>=0;j-=h)
			{
				if(arr[j]>value)
					arr[j+h]=arr[j];
				else
					break;
			}
			arr[j+h]=value;
		}
		h/=3;
	}
}
				
void shellSort(int *arr, int n)
{
	int h=1;
	while(h<n/3)
		h=3*h+1;
	
	while(h>=1)
	{
		for(int i=h;i<n;i++)
		{
			int j=i-h;
			int value=arr[i];
			for(;j>=0;j-=h)
			{
				if(arr[j]<value)
					arr[j+h]=arr[j];
				else
					break;
			}
			arr[j+h]=value;
		}
		h/=3;
	}
}

void shellSort(int *arr, int n)
{
	int h=1;
	while(h<n/3)
		h=3*h+1;
	
	while(h>=1)
	{
		for(int i=h;i<n;i++)
		{
			int j=i-h;
			int value=arr[i];
			for(;j>=0;j-=h)
			{
				if(arr[j]<value)
					arr[j+h]=arr[j];
				else
					break;
			}
			arr[j+h]=value;
		}
		h/=3;
	}
}
	
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
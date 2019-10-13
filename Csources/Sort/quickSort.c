
int partition(int *arr, int low, int high)
{
	int pivot=arr[high];
	int i=low;
	for(int j=low;j<high;j++)
	{
		if(arr[j]<pivot)
		{
			int tmp=arr[i];arr[i]=arr[j];arr[j]=tmp;
			i++;
		}
	}
	int tmp=arr[i];arr[i]=arr[high];arr[high]=tmp;
	return i;
}

int partition(int *arr, int low, int high)
{
	int pivot=arr[low];
	
	while(low<high)
	{
		while((low<high)&&(arr[high]>=pivot))
		{
			high--;
		}
		
		if(low<high)
			arr[low]=arr[high];
		
		while((low<high)&&(arr[low]<pivot))
		{
			low++;
		}
		
		if(low<high)
			arr[high]=arr[low];

	}
	
	arr[low]=pivot;
	
	return low;
}

int partition(int *arr, int low, int high)
{
	int pivot=arr[low];
	while(low<high)
	{
		while((low<high)&&(arr[high]>=pivot)
		{
			high--;
		}
		
		if(low<high)
			arr[low]=arr[high];
		
		while((low<high)&&(arr[low]<pivot)
		{
			low++;
		}
		
		if(low<high)
			arr[high]=arr[low];
	}
	
	arr[low]=pivot;
	
	return low;
}

void partition(int *arr, int low, int high)
{
	int pivot=arr[low];
	while(low<high)
	{
		while((low<high)&&(arr[high]>=pivot)
		{
			high--;
		}
		
		if(low<high)
			arr[low]=arr[high];
		
		while((low<high)&&(arr[low]<pivot)
		{
			low++;
		}
		
		if(low<high)
			arr[high]=arr[low];
	}
	
	arr[low]=pivot;
	
	return low;
}

//quickSort(arr,0,n-1);
void quickSort(int *arr, int low, int high)
{
	if(low>=high)
		return;
	
	int mid=partition(arr,low,high);
	quickSort(arr,low,mid-1);
	quickSort(arr,mid+1,high);
}

void partition(int *arr, int low, int high)
{
	int pivot=arr[low];
	while(low<high)
	{
		while((low<high)&&(arr[high>=pivot))
			high--;
		if(low<high)
			arr[low]=arr[high];
		
		while((low<high)&&(arr[low]<pivot))
			low++;
		if(low<high)
			arr[high]=arr[low];
	}
	arr[low]=pivot;
	return low;
}

void partition(int *arr, int low, int high)
{
	int pivot=arr[low];
	while(low<high)
	{
		while((low<high)&&(arr[high]>=pivot))
			high--;
		if(low<high)
			arr[low]=arr[high];
		while((low<high)&&(arr[low]<pivot))
			low++;
		if(low<high)
			arr[high]=arr[low];
	}
	arr[low]=pivot;
}
	
void quickSort(int *arr, int low, int high)
{
	if(low>=high)
		return;
	int mid=partition(arr,low,high);
	quickSort(arr,low,mid-1);
	quickSort(arr,mid+1,high);
}


void quickSort(int *arr,int low,int high)
{
	if(low>=high)
		return;
	
	int index=partition(arr,low,high);
	
	quickSort(arr,low,index-1);
	quickSort(arr,index+1,high);
}


int partition(int *arr,int low, int high)
{
	int pivot=arr[low];
	while(low<high)
	{
		while((low<high)&&(arr[high]<pivot))
		{
			high--;
		}
		
		if(low<high)
			arr[low]=arr[high];
		while((low<high)&&(arr[low]>pivot))
		{
			low++;
		}
		if(low<high)
		{
			arr[high]=arr[low];
		}
	}
	arr[low]=pivot;
	return low;
}
































void merge(int *arr, int low, int mid, int high)
{
	
	int *tarr=calloc(high-low+1,sizeof(int));
	int i=low, j=mid+1, k=0;
	
	while(i<=mid&&j<=high)
	{
		if(arr[i]<arr[j])
			tarr[k++]=arr[i++];
		else
			tarr[k++]=arr[j++];
	}
	
	while(i<=mid)
	{
		tarr[k++]=arr[p++];
	}
	
	while(j<=high)
	{
		tarr[k++]=arr[j++];
	}
	
	for(int i=0;i<high-low+1;i++)
	{
		arr[low+i]=tarr[i];
	}
}

	
}	
//mergeSort(arr,0,n-1)
void mergeSort(int *arr, int low, int high)
{
	if(low>=high)
		return;
	
	mid=low+(high-low)>>1;
	
	mergeSort(arr,low,mid);
	mergeSort(arr,mid+1,high);
	merge(arr,low,mid,high);
}

void merge(int *arr, int low, int mid ,int high)
{
	int *tmp=calloc(high-low+1, sizeof(int));
	int i=low, j=mid+1, k=0;
	while(i<=mid&&j<=high)
	{
		if(arr[i]<arr[j])
			tmp[k++]=arr[i++];
		else
			tmp[k++]=arr[j++];
	}
	while(i<=mid)
		tmp[k++]=arr[i++];
	while(j<=high)
		tmp[k++]=arr[j++];
	for(int i=0;i<high-low+1;i++)
		arr[low+i]=tmp[i];
}

void merge(int *arr,int low, int mid, int high)
{
	int *tarr=calloc(high-low+1,sizeof(int));
	int i=low, j=mid+1, k=0;
	while(i<=mid&&j<=high)
	{
		if(arr[i]<arr[j])
			tarr[k++]=arr[i++];
		else
			tarr[k++]=arr[j++];
	}
	while(i<=mid)
	{
		tarr[k++]=arr[i++];
	}
	while(j<=high)
	{
		tarr[k++]=arr[j++];
	}
	for(int i=0;i<high-low+1;i++)
		arr[low+i]=tarr[i];
}

void mergeSort(int *arr, int low, int high)
{
	if(high>=low)
		return;
	
	mid=low+(high-low)>>1;
	
	mergeSort(arr,low,mid);
	mergeSort(arr,mid+1,high);
	merge(arr,low,mid,high);
}

void mergeSort(int *arr, int low, int high)//mergeSort(a,0,n-1);
{
	if(low>=high)
		return;
	
	int middle=low+(high-low)>>1;
	mergeSort(arr,low,middle);
	mergeSort(arr,middle+1,high);
	merge(arr,low,middle,high);
}


void merge(int *arr,int low, int middle,int high)
{
	int i=low;
	int j=middle+1;
	int *tmp=calloc(high-low+1,sizeof(int));
	while((i<=low)&&(j<=high))
	{
		if(arr[i]<arr[j])
			tmp[k++]=arr[i++];
		else
			tmp[k++]=arr[j++];
	}
	
	while(i<=low)
	{
		tmp[k++]=arr[i++];
	}
	while(j<=high)
	{
		tmp[k++]=arr[j++];
	}
	
	for(int i=0;i<high-low+1;i++)
		arr[i]=tmp[i];
}














































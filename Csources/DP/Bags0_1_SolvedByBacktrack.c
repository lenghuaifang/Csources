//0-1背包问题的回溯算法实现
//调用f(0,0);n为物品个数，w为背包能承受的最大重量。

//e.g. weight[5]={2,2,4,6,3}; n=5; w=9; maxW=0;
int main()
{
	int weight[5]={2,2,4,,6,3};
	int n=5;
	int w=9;
	int maxW=0;
	//int mem[5][10]={0};//1.1
	//maxW=dp_f(weight,n,w);//1.2
	f(0,0);
	printf("%d",maxW);
	return 0;
}

void f(int i, int cw)//1.0
{
	if(cw==w||i==n)
	{
		if(cw>maxW)
			maxW=cw;
		return;
	}
	f(i+1,cw);
	if(cw+weight[i]<=w)
		f(i+1,cw+weight[i]);
}

void f(int i, int cw)//1.1
{
	if(cw==w||i==n)
	{
		if(cw>maxW)
			maxW=cw;
		return;
	}
	if(mem[i][cw]==1)
		return;
	mem[i][cw]=1;
	f(i+1,cw);
	if(cw+weight[i]<=w)
		f(i+1,cw+weight[i]);
}

int dp_f(int *weight, int n, int w)//1.2
{
		
	int **state=calloc(n,sizeof(int *));
	for (int i = 0; i <n; i++)
	{
		state[i] = calloc(w + 1, sizeof(int));
	}

	state[0][0]=1;
	if(weight[0]<=w)
		state[0][weight[0]]=1;
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<=w;j++)
		{
			if(state[i-1][j]==1)
				state[i][j]=state[i-1][j];
		}
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<=w;j++)
		{
			if(state[i-1][j]==1)
				state[i][j+weight[i]]=1;
		}
	}
	for(int j=w;j>=0;j--)
	{
		if(state[n-1][j]==1)
			return j;
	}
	return 0;
}

		
int dp_f(int *weight,int n, int w)//1.3
{
	int *state=calloc(w+1,sizeof(int));
	state[0]=1;
	if(weight[0]<=w)
		state[weight[0]]=1;
	for(int i=1;i<n;i++)
	{
		for(int j=w-weight[i];j>=0;j--)
		{
			if(state[j]==1)
				state[j+weight[i]]=1;
		}
	}
	for(int i=w;i>=0;i--)
	{
		if(state[i]==1)
		{
			return i;
		}
	}
	return 0;
}
		
int dp_f(int *weight, int *value, int n, int w)//1.4
{
	int **state=calloc(n,sizeof(int *));
	for (int i = 0; i <n; i++)
	{
		state[i] = calloc(w + 1, sizeof(int));
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<w+1;j++)
			state[i][j]=-1;
	}
	
	state[0][0]=0;
	if(weight[0]<=w)
		state[0][weight[0]]=value[0];
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<w+1;j++)
		{
			if(state[i-1][j]>=0)
				state[i][j]=state[i-1][j];
		}
	}
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<=w-weight[i];j++)
		{
			if(state[i-1][j]>=0)
			{
				int v=state[i-1][j]+value[i];
				if(v>state[i][j+weight[i]])
					state[i][j+weight[i]]=v;
			}
		}
	}
	
	int maxValue=-1;
	for(int j=0;j<=w;j++)
	{
		if(state[n-1][j]>maxValue)
			maxValue=state[n-1][j];
	}
	return maxValue;
}
	
	























		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
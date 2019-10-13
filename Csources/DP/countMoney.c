//penny[n];aim是目标值
int countWays(int *penny, int n, int aim)
{
	int **pd=calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
		pd[i]=calloc(aim+1,sizeof(int));
	
	for(int i=0;i<n;i++)
		pd[i][0]=1;
	
	for(int i=1;penny[0]*i<=aim;i++)
		pd[0][penny[0]*i]=1;
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<=aim;j++)
		{
			if(j>=penny[i])
				pd[i][j]=pd[i-1][j]+pd[i][j-penny[i]];
			else
				pd[i][j]=pd[i-1][j];
		}
	}
	return pd[n-1][aim];
}
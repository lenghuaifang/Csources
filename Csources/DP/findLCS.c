int findLCS(char *str1, int n, char *str2, int m)
{
	int **dp=calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
		dp[i]=calloc(m,sizeof(int));
	
	for(int i=0;i<n;i++)
	{
		if(str1[i]==str2[0])
		{
			dp[i][0]=1;
			for(int j=i+1;j<n;j++)
				dp[j][0]=1;
			break;
		}
	}
	
	for(int i=0;i<m;i++)
	{
		if(str1[0]==str2[i])
		{
			dp[0][i]=1;
			for(int j=i+1;j<m;j++)
				dp[0][j]=1;
			break;
		}
	}
	
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			if(str1[i]==str2[i])
				dp[i][j]=max3(dp[i-1][j-1]+1,dp[i-1][j],dp[i][j-1]);
			else
				dp[i][j]=max2(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[n-1][m-1];
}
	
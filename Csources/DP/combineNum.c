int combineNum(int num)
{
	int *dp = calloc(num + 1, sizeof(int));
	dp[1] = 1;
	for (int i = 2; i <= num; i++)
	{
		dp[i] = dp[i - 1] + 1;
		for (int j = 2; j <= i/2; j++)
		{
			dp[i] += (i / j - 1);
		}
	}
	return dp[num];
}
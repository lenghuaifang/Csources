#include "stdio.h"
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int weight[n];
        int nums[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&weight[i]);
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&nums[i]);
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+weight[i]*nums[i];
        }
        int *flag=calloc(sum+1,sizeof(int));
        flag[0]=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<nums[i];j++)
            {
                for(int k=sum;k>=0;k--)
                {
                    if(flag[k]==1)
                        flag[k+weight[i]]=1;
                }
            }
        }
        int count=0;
        for(int i=0;i<=sum;i++)
        {
            if(flag[i]==1)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
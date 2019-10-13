#include "stdbool.h"
#include "math.h"
#include "stdio.h"
        int oindex;
        int eindex;
int graph[100][100];
int odd[100];
int even[100];
int pairs[100];
int mem[100];
bool find(int i)
{
    for(int j=0;j<oindex;j++)
    {
        if(graph[i][j])
        {
            if(mem[j])
                continue;
            mem[j]=1;
            if(pairs[j]==0||find(pairs[j]-1))
            {
                pairs[j]=i+1;
                return true;
            }
        }
    }
    return false;
}

bool isPrem(int even, int odd)
{
    int sum=odd+even;
    int num=sqrt(sum);
    for(int i=2;i<=num;i++)
    {
        if(sum%i==0)
            return false;
    }
    return true;
}

int main()
{
    int N;
    while(scanf("%d",&N)!=EOF)
    {
        memset(graph,0,sizeof(graph));
        
        memset(odd,0,sizeof(odd));
        
        memset(even,0,sizeof(even));
        
        memset(pairs,0,sizeof(pairs));
        
        oindex=0;
        eindex=0;
        for(int i=0;i<N;i++)
        {
            int tmp;
            scanf("%d",&tmp);
            if(tmp%2==0)
                even[eindex++]=tmp;
            else
                odd[oindex++]=tmp;
        }
        for(int i=0;i<eindex;i++)
        {
            for(int j=0;j<oindex;j++)
            {
                if(isPrem(even[i],odd[j]))
                    graph[i][j]=1;
            }
        }
        int result=0;
        for(int i=0;i<eindex;i++)
        {
            memset(mem,0,sizeof(mem));
            if(find(i))
                result++;
        }
        printf("%d\n",result);
    }
    return 0;
}
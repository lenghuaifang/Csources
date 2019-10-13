#include "stdio.h"
struct Point
{
    int row;
    int col;
};
int maze[10][10];
int N;
int M;
struct Point trace[100];
int k;
void find(int i,int j)
{
    struct Point loc={i,j};
    maze[i][j]=1;
    trace[k++]=loc;
    if((i==(N-1))&&(j==(M-1)))
    {
        for(int i=0;i<k;i++)
        {
            printf("(%d,%d)\n",trace[i].row,trace[i].col);
        }
        return;
    }
    if(((i-1)>=0)&&(maze[i-1][j]==0))
        find(i-1,j);
    if(((i+1)<N)&&(maze[i+1][j]==0))
        find(i+1,j);
    if(((j-1)>=0)&&(maze[i][j-1]==0))
        find(i,j-1);
    if(((j+1)<M)&&(maze[i][j+1]==0))
        find(i,j+1);
    k--;
    maze[i][j]=0;
}


int main()
{
    while(scanf("%d%d",&N,&M)!=EOF)
    {
        k=0;
        for(int i=0;i<N;i++)
            for(int j=0;j<M;j++)
            {
                scanf("%d",&maze[i][j]);
            }
        find(0,0);
    }
    return 0;
}
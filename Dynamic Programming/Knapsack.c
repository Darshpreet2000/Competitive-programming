#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int knapsack(int wt[], int val[], int W, int n)
{
    int i,j;
    int t[n+1][W+1];
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<W+1;j++)
        {
            if(i==0 || j==0)
                t[i][j]=0;
        }
    }
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<W+1;j++)
        {
            if(wt[i-1]<=j)
                t[i][j]=fmax(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
        }
    }
    return t[n][W];
}
void main()
{
    int val[]={10,20,12,25};
    int wt[]={1,4,3,2};
    int W=50;
    int n=sizeof(val)/sizeof(val[0]);
    printf("%d", knapsack(wt,val,W,n));
}

#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int t=n;
    int len=2*n-1;
    int start=0;
    int end=len-1;
    int a[len][len];
    while(t!=0)
    {
        for(i=start;i<=end;i++)
        {
          for(j=start;j<=end;j++)
          {
              if(i==start||i==end||j==start||j==end)
              {
                  a[i][j]=t;
              }
          }
        }
        start++;
        end--;
        t--;
    }
    for(i=0;i<len;i++)
        {
          for(j=0;j<len;j++)
          {
              printf("%d ",a[i][j]);
          }
          printf("\n");
        }

}

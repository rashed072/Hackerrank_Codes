#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* climbingLeaderboard(int *r,long long int n,int *p,long long int m,int *c)
{
    long long int i,j;
    int *b=malloc(sizeof(int)*n);
    *(c)=p;
    b[0]=1;
    for(i=1;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
             if(r[j]==r[j-1])
             {
                 b[j]=b[j-1];
                 break;

             }
             else b[i]=b[i-1]+1;
        }
    }

    for(i=0;i<m;i++)
    {

            if(p[i]<r[n-1])
            {
                c[i]=b[n-1]+1;

            }
            else{
                    for(j=0;j<n;j++)
                    {
                        if(p[i]==r[j])
                        {
                            c[i]=b[j];
                            break;
                        }
                        else if(p[i]>r[0])
                        {
                            c[i]=1;
                            break;
                        }
                        else if(p[i]>r[j]&&p[i]<r[j-1])
                        {
                            c[i]=b[j];
                        }
                    }

            }

    }
    //ree(b);
    //free(c);
    return c;

}
int main()
{
    long long int n,m,i;
    scanf("%lld",&n);
    int *r=malloc(sizeof(int)*n);
    int *p=malloc(sizeof(int)*m);
    int *result=malloc(sizeof(int)*m);
    int *c=malloc(sizeof(int)*m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&r[i]);
    }
    scanf("%lld",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&p[i]);
    }
    result=climbingLeaderboard(r,n,p,m,c);
    for(i=0;i<m;i++)
    {
         printf("%d\n",result[i]);
    }
    //free(r);
    //free(p);
    //free(result);

}

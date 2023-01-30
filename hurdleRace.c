#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int hurdleRace(int a[],int k,int n)
{
    int i,max=a[0];
    int r;
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    //printf("%d\n",max);
    if(k>max)
    {
        return 0;
    }
    /*if(max%k==0)
    {
        r=max-k;
        return r;
    }*/
    r=max-k;
    return r;
}
int main()
{
    int n,k,i;
    int r;
    scanf("%d %d",&n,&k);
    int *arr=malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    r=hurdleRace(arr,k,n);
    printf("%d\n",r);
    free(arr);
}

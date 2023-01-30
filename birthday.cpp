#include<iostream>
using namespace std;
int birthday(int n,int arr[],int d,int m) {
int i,j,sum,count=0;
for(i=0;i<n;i++)
{
    sum=0;
    for(j=i;j<m+i;j++)
    {
        sum=sum+arr[j];
    }
    if(sum==d)
    {
        count++;
    }
}
return count;
}
int main()
{
   int arr[1000],n,d,m,r,i;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cin>>d>>m;
   r=birthday(n,arr,d,m);
   cout<<r<<endl;
}

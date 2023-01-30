#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int sockMerchant(int n,int arr[])
{
    int i,r,j,count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
                arr[j]=0;
                arr[i]=0;
                break;
            }
        }
    }
    return count;
}
int main()
{
    int n,i,arr[100],r;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    r=sockMerchant(n,arr);
    cout<<r<<endl;
}

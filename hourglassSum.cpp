#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int hourglassSum(int arr[6][6])
{
    int i,j,k,l,sum=0,max=-63;
    for(i=0;i<4;i++)
    {
        for(j=1;j<=4;j++)
        {
            for(k=i;k<=i+2;k++)
            {
                if(k==i||k==i+2)
                {
                  for(l=j-1;l<=j+1;l++)
                  {
                      sum=sum+arr[k][l];
                  }
                }
                else sum=sum+arr[k][j];
            }
            if(max<sum)
            {
            max=sum;
            }
            sum=0;
        }
    }
    return max;


}
int main()
{
    int arr[6][6],i,j,max;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }
    max=hourglassSum(arr);
    cout<<max<<endl;
}

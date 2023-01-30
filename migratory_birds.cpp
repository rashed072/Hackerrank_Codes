#include<iostream>
#include <bits/stdc++.h>
#include<limits>
using namespace std;
int main()
{
     long long int arr[1000000],one=0,two=0,three=0,four=0,five=0,i,max_size;
    unsigned long long  n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            one++;
        }
        else if(arr[i]==2)
        {
            two++;
        }
        else if(arr[i]==3)
        {
            three++;
        }
        else if(arr[i]==4)
        {
            four++;
        }
        else
        {
            five++;
        }
    }
    max_size=max(one,two);
    max_size=max(max_size,three);
    max_size=max(max_size,four);
    max_size=max(max_size,five);
    if(max_size==one)
    {
        cout<<1<<endl;

    }
    else if(max_size==two)
    {
        cout<<2<<endl;

    }
    else if(max_size==three)
    {
        cout<<3<<endl;

    }
    else if(max_size==four)
    {
        cout<<4<<endl;

    }
    else
    {
        cout<<5<<endl;

    }



}

#include<iostream>
#include<cmath>
using namespace std;
int viralAdvertising(int d)
{
    int sum,i,s,l;
    l=floor(5/2);
    sum=l;
    for(i=2;i<=d;i++)
    {
        s=l*3;
        l=floor(s/2);
        sum=sum+l;
    }
    return sum;

}
int main()
{
    int d,r;
    cin>>d;
    r=viralAdvertising(d);
    cout<<r<<endl;

}

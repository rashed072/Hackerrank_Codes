#include<iostream>
#include<vector>
using namespace std;
int findDigits(int n) {
    int t=n;
    int q,count=0;
    while(t!=0)
    {
        q=t%10;
        t/=10;
        if(q==0)
        {
            goto label;
        }
        if((n%q)==0)
        {
            count++;
        }
        label:;
    }
return count;
}

int main()
{
    int n,r;
    cin>>n;
    r=findDigits(n);
    cout<<r<<endl;

}

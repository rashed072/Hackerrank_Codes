#include<iostream>
#include<string>
using namespace std;
int countingValleys(int steps, string s)
{
    int i,count=0,u_count=0,d_count=0;
    for(i=0;i<steps;i++)
    {
        if(s[i]=='D'&&u_count>0)
        {
            u_count--;
        }
        else if(s[i]=='D'&&u_count<1)
        {
            d_count++;
        }
        else{
            u_count++;
        }
        if((d_count==u_count)&&d_count!=0)
        {
            count++;
            u_count=0;
            d_count=0;
        }

    }


return count;
}
int main()
{
    int n,r;
    string s;
    cin>>n>>s;
    r=countingValleys(n,s);
    cout<<r;

}

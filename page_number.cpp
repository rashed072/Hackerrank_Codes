#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int pageCount(int n,int p)
{
    int i,j,count=0;
    if(p==1)
    {
        return 0;
    }
    else if(p==n)
    {
        return 0;
    }
    else if((p-1)<(n-p))
    {
        count++;
        for(i=2;i<p;i+=2)
        {
            for(j=i;j<i+2;j++)
            {
                if(j==p)
                {
                    return count;
                }

            }
             count++;
        }

    }
    else{
        if(n%2==0)
        {
            count++;
            for(i=n-1;i>p;i-=2)
            {
                for(j=i;j>i-2;j--)
            {
                if(j==p)
                {
                    return count;
                }

            }
            count++;
            }
        }
            else{
                for(i=n;i>p;i-=2)
            {
                for(j=i;j>i-2;j--)
            {
                if(j==p)
                {
                    return count;
                }

            }
            count++;
            }
            }

}

return count;


}
int main()
{
    int n,p,r;
    cin>>n>>p;
    r= pageCount(n,p);
    cout<<r<<endl;
}

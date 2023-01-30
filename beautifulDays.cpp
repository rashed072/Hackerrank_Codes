#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;
int beautifulDays(int i, int j, int k) {
    int l,count=0,n;
    float m;
    int reverse_num(int n);
    for(l=i;l<=j;l++)
    {
      m=(abs(l-reverse_num(l)))/float(k);
      n=m;
      if((m-n)==0)
      {
          count++;
      }
    }
    return count;

}
int reverse_num(int n)
{
    int reverse=0,r;
    while(n)
    {
        r=n%10;
        reverse=10*reverse+r;
        n/=10;
    }
    return reverse;
}

int main()
{
    int i,j,k,r;
    cin>>i>>j>>k;
    r=beautifulDays(i,j,k);
    cout<<r<<endl;


}

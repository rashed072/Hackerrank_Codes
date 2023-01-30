#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int pickingNumbers(vector<int> a) {
    int i,j,count1,count2,max=0,temp;
    for(i=0;i<a.size();i++)
    {
        for(j=0;j<a.size()-i;j++)
        {
          if(a[j]>a[j+1])
          {
              temp=a[j+1];
              a[j+1]=a[j];
              a[j]=temp;
          }
        }
    }
    for(i=0;i<a.size();i++)
    {
        count1=0;
        count2=0;
        for(j=i;j<a.size();j++)
        {
            if(abs(a[i]-a[j])<=1)
            {
                count1++;
            }
            else{
                break;
            }
        }
        for(j=i;j>0;j--)
        {
            if(abs(a[i]-a[j])<=1)
            {
                count2++;
            }
            else{
                break;
            }
        }
        if(count1>count2&&count1>max)
        {
            max=count1;
        }
        else if(count1<count2&&count2>max)
        {
            max=count2;
        }
    }
    return max;

}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int result = pickingNumbers(a);
    cout << result << endl;
    return 0;
}

#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<int> permutationEquation(vector<int> p) {
    int n=p.size();
    vector<int>a(n);
    int x,i,j,k=0;
    for(x=1;x<=p.size();x++)
    {
      for(i=0;i<p.size();i++)
      {
          if(p[i]==x)
          {
              i++;
              break;
          }
      }
    for(j=0;j<p.size();j++)
              {
                  if(p[j]==i)
                  {
                      j++;
                      break;
                  }
              }
             a[k]=j;
              k++;
    }
return a;
}
int main()
{
    int n;
    cin>>n;
    vector<int> p(n);

    for (int i = 0; i < n; i++) {
            cin>>p[i];

    }

    vector<int> result = permutationEquation(p);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i]<<endl;

    }

}

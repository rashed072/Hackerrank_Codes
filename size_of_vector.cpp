#include<iostream>
#include<vector>
#include<string>
using namespace std;
string angryProfessor(int k, vector<int> a) {
    int i,count=0;
    for(i=0;i<a.size();i++)
    {
        if(a[i]<=0)
        {
            count++;
            //cout<<count<<endl;
        }
    }
    if(count>=k)
    {
        return "NO";
    }
    else return "YES";

}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    string word;
    word=angryProfessor(k,a);
    cout<<word<<endl;

}

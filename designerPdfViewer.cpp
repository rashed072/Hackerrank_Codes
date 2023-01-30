#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include <cstring>
#include <vector>
using namespace std;
int designerPdfViewer(vector<int> h, string word) {
    int i=0,l,max,area;
    int s[26];
    l=word.length();
    while(i!=l)
    {
        s[i]=(int)word[i]-97;
        i++;
    }
    max=h[s[0]];
    for(i=1;i<l;i++)
    {
      if(max<h[s[i]])
      {
          max=h[s[i]];
      }
    }
    area=max*l*1;
    return area;

}
int main()
{

    vector<int> h(26);

    for (int i = 0; i < 3; i++) {
        cin>>h[i];
    }

    string word;
    cin>>word;

    int result = designerPdfViewer(h, word);

    cout << result << "\n";


    return 0;
}

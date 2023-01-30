#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int h1,h2,hh,i;
    h1=(int)s[1]-'0';
    h2=(int)s[0]-'0';
    hh=h2*10+h1%10;
    cout<<hh<<endl;
    if(s[8]=='A')
    {
        if(hh==12)
        {
            cout<<"00";
            for(i=2;i<8;i++)
        {
            cout<<s[i];
        }
        }
        else{
            for(i=0;i<8;i++)
            {
                cout<<s[i];
            }
        }

    }
    else{
        if(hh==12)
        {
            for(i=0;i<8;i++)
            {
                cout<<s[i];
            }
        }
            else if(hh>12&&hh<10){
                hh=(h1+2)+10;
                cout<<hh;
                for(i=2;i<8;i++)
        {
            cout<<s[i];
        }
            }
            else
            {
                hh=hh+12;
                cout<<hh;
                for(i=2;i<8;i++)
        {
            cout<<s[i];
        }
            }
        }
}



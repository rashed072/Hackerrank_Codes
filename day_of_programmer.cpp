#include<iostream>
#include<string>
#include<sstream>
using namespace std;
string dayOfProgrammer(int year) {
    string s,y;
    stringstream stream;
    stream<<year;
    int i,j=0;
    y=to_string(year);
    if(year==1918)
    {
        s="26.09.1918";
        return s;
    }
    else if(year>=1700&&year<=1917)
    {
        if(year%4==0)
        {
            s="12.09.1700";
            for(i=6;i<=9;i++)
            {
                s[i]=y[j];
                j++;
            }
            return s;
        }
        else{
            s="13.09.1700";
            for(i=6;i<=9;i++)
            {
                s[i]=y[j];
                j++;
            }
            return s;
        }

    }
    else if(year>=1919&&year<=2700)
    {
        j=0;
        if((year%4==0&&year%100!=0)||year%400==0)
        {
            s="12.09.1919";
            for(i=6;i<=9;i++)
            {
                s[i]=y[j];
                j++;
            }
            return s;
        }
        else{
            s="13.09.1919";
            for(i=6;i<=9;i++)
            {
                s[i]=y[j];
                j++;
            }
            return s;
        }

    }
    return s;

}
int main()
{
    int year,i=0;
    cin>>year;
    string s;
    s=dayOfProgrammer(year);
    cout<<s;
}


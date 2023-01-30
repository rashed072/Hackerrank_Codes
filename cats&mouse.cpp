#include<iostream>
#include<cstdlib>
using namespace std;
void catAndMouse(int x,int y,int z)
{

        if(abs(z-x)<abs(z-y))
    {
        cout<<"Cat A"<<endl;
    }
    else if(abs(z-x)>abs(z-y))
    {
        cout<<"Cat B"<<endl;
    }
    else{
        cout<<"Mouse C"<<endl;
    }


}
int main()
{
    int q,x,y,z,i;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>x>>y>>z;
        catAndMouse(x,y,z);
    }
}

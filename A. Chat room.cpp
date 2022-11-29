#include<iostream>
using namespace std;

int main()
{
    string a;
    string b="hello";
    cin>>a;
    int x=0,y=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==b[x])
        {
            x++;
            y++;
        }
    }
    if(y==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

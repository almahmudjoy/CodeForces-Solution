#include<bits/stdc++.h>
using namespace std;

void contest()
{
    int a;
    cin>>a;
    string s1;
    cin>>s1;
    int begiin=-1;
    int terminal=-1;
    for(int i=0;i<s1.length();i++)
    {
        if(begiin==-1 && s1[i]==',')
        {
            s1[i]='.';
        }
        else if(begiin==-1 && s1[i]==' " ')
        {
                begiin=i;
        }
        else if(begiin!=-1 && s1[i]==' " ')
        {
            begiin=-1;
        }

    }
    cout<<s1;
}
int main()
{
    int t;
    contest();
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    cin>>s;
    int x=s.length();
    for(int i=0; i<x; i++)
    {
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='y' ||s[i]=='A' ||
           s[i]=='E' ||s[i]=='I' ||s[i]=='U' ||s[i]=='O' ||s[i]=='Y' )
        {
            continue;
        }
        else
        {
            s1+='.';
            s1+=tolower(s[i]);
        }
    }
    cout<<s1<<endl;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string st;
        cin>>st;
        string s="314159265358979323846264338327";
        int x=st.size();
        int count=0;
        for(int i=0; i<x; i++)
    {
        if(st[i]==s[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout<<count<<"\n";
    }
}

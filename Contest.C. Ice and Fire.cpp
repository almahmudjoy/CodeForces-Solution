#include<bits/stdc++.h>
using namespace std;

void joy(string s, int n)
{
    char p=s[0];
    int x=1;
    int y=1;
    for(auto it :s)
    {
        y++;
        if(p==it)
        {
            cout<<x<<" ";
        }
        else
        {
            x=y-1;
            p=it;
            cout<<x<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int j;
        cin>>j;
        string s;
        cin>>s;
        joy(s,j);
    }
}

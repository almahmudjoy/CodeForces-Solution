#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int t=s.size();
    if(t<=10)
        {
            cout<<s<<endl;
        }
        else if(t>10)
        {
            cout<<s[0]<<t-2<<s[t-1]<<endl;

        }
    }
}



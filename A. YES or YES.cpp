#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;

    while(x--)
    {
        string s;
        cin>>s;

        if(s=="YES" || s=="YEs" || s=="yES" || s=="YeS"  || s=="yes" || s=="Yes" || s=="yEs" || s=="yeS" )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin>>t;

    while(t--)
    {
        long long a;
        cin>>a;
        if(a%2==0)
        {
            int b=(a/2);
            int d=b-1;
            cout<<d<<endl;
        }
        else
        {
            int c=a/2;
            cout<<c<<endl;
        }

    }




}


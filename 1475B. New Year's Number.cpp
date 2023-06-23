#include<bits/stdc++.h>
#define ll  long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;

        ll mod=x%2020;
        ll div=x/2020;

        if(mod<=div)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }




}


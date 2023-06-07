#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    int x,y,n,a,b;
    while(t--)
    {

        cin>>x>>y>>n;
        a= (n-y)/x;
        b=(a*x)+y;
         cout<<b<<endl;
    }

}


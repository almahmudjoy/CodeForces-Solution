#include<bits/stdc++.h>
//#define ll  long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin>>t;
    while(t--)
    {
        long long n,m,a,b,s1=0,s2=0;
        cin>>n>>m;
        for(long long i=0; i<n; i++)
        {
            cin>>a;
            s1+=a;
        }

        for(long long j=0; j<m; j++)
        {
            cin>>b;
            s2+=b;
        }
        if(s1>s2) cout<<"Tsondu"<<endl;
        else if (s1<s2) cout<<"Tenzing"<<endl;
        else cout<<"Draw"<<endl;
    }
}

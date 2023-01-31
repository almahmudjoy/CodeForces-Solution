#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int t;
    for(int i=1; i<=n;i++)
    {
        cin>>t;
        if(t%2==0)
        {
            cout<<1<<" "<<t/2<<endl;

        }
    else
    {
         cout<<-1<<endl;
    }
}
}


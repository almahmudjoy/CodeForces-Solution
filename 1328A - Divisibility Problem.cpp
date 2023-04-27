#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    while(n--)
    {
        long long a,b;
        cin>>a>>b;
        if(a%b==0)
            cout<<"0"<<endl;
        else
            cout<<b-(a%b)<<endl;
    }
}

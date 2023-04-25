#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b,sum=0,x=0;
    while(n--)
    {
        cin>>a>>b;
        sum=(a+x)-b;
        if(sum<0)
            x=0;
        else
            x=sum;
    }
    cout<<sum;
}

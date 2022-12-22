#include<bits/stdc++.h>
using namespace std;

bool prime (int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int n=a+1;
    int t=1;
    while(t==1)
    {
        int x=prime(n);
        if(x==1)
        {
            t=0;
        }
        else
        {
            n++;
        }
    }
    if(b==n)

        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }


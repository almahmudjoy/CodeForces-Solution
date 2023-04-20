#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,y;
    while(n--)
    //for(int b=0; b<n; b++)
    {
        string a;
        cin>>a;
        for(int i=0; i<6; i++)
        {
            x= a[i]+a[i+1]+a[i+2];
            y=a[i+3]+a[i+4]+a[i+5];
            if(x==y)
            {
                cout<<"YES"<<endl;
                break;
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }
        }
    }
}

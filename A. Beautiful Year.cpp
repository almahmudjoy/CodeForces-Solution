#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(;;)
    {
        n++;
        int b=n/1000;
        int c=(n/100)%10;
        int d=(n/10)%10;
        int e=(n%10);
        if(b!=c && b!=d && b!=e && c!=d && c!=e && d!=e  )
        {
            break;
        }
    }
    cout<<n;
}

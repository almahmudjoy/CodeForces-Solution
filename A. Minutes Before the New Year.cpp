#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a=1440;
    cin>>n;
    while(n--)
    {
        int h,m;
        cin>>h>>m;
       int b= h*60+m;
       int c=a-b;
       cout<<c<<endl;

    }
}

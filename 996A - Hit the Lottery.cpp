#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int a=n/100;
    int b=n%100;

    a+=b/20;
    b=b%20;

    a+=b/10;
    b=b%10;

    a+=b/5;
    b=b%5;

    a+=b/1;

    cout<<a;
}

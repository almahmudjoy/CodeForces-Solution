#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;
    while(n--)
    {
        long long a,b;
        cin>>a>>b;

        int sub= (abs(a-b))+9;
        int x= sub/10;
        cout<<x<<endl;
    }




}


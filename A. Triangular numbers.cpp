#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    int i=1;
    while (i * (i + 1) / 2 < a) {
        i++;
    }
    if((i * (i + 1) / 2 == a))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

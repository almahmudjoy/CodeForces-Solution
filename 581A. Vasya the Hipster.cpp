#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;

    int maxi=min(a,b);
    int same=(max(a,b)- min(a,b))/2;
    cout<<maxi<<" "<<same<<endl;


}


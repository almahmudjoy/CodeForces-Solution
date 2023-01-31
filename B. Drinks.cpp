#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    int n,i;
    double sum=0;
    cin>>n;
    double a[150];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
         sum+=double(a[i]);
    }

    cout<<fixed<<setprecision(12)<<(sum/n)<<endl;
}

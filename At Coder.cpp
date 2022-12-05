#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum;
    cin>>n>>sum;
    cout<<sum<<' ';
    int lastsum=sum;
    for(int i=1;i<n; i++)
    {

        cin>>sum;
        cout<<sum - lastsum<<' ';
        lastsum=sum;
    }
}

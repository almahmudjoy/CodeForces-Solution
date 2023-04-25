#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    string a;
    cin>>a;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<a.size()-1; j++)
        {
            if(a[j]=='B' && a[j+1]=='G')
            {
                a[j]='G';
                a[j+1]='B';
                j++;
            }
        }
    }
    cout<<a<<"\n";
}

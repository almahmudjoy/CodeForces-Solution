#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,c=0;
    cin>>x>>y;
    int n[x];
    for(int i=0; i<x; i++)
        cin>>n[i];
        y=y-1;
        for(int i=0; i<x; i++)
        {
            if(n[i]>=n[y] &&n[i]>0)
                c++;
        }cout<<c<<endl;
    }


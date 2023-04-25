#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int arr[x];
    int s1=0, s2=0;
   for(int i=0; i<x; i++)
    {
        cin>>arr[i];
        if(arr[i]<=y)
        {
            s1++;
        }
        else
           {
             s2+=2;
           }
    }
    cout<<s1+s2<<endl;
}

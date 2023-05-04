#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    cin>>x>>y;
    int cont=0;
    pair <int,int> arr[1000];
    for(int i=0; i<y; i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+y);
     for(int i=0; i<y; i++)
     {
         if(x<=arr[i].first)
         {
             cont++;
             break;
         }
         else
         {
             x=x+arr[i].second;
         }
     }
     if(cont>0)
     {
         cout<<"NO"<<endl;
     }
     else
        cout<<"YES"<<endl;
}

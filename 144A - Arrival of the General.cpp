#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int maxi=0, mini=101, maximum,minimum;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            maximum=i;
        }
        if(arr[i]<=mini)
        {
            mini=arr[i];
            minimum=i;
        }
    }
    if(maximum>minimum)
        cout<<maximum+(n-1)-minimum;
}

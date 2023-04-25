#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
    int a[n];
   int sum=0,cnt=0,ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sum=sum/2;
        sort(a,a+n);
        for(int j=n-1; j>=0; j--)
        {
            ans+=a[j];
            cnt++;
            if(ans>sum)
                break;
        }
        cout<<cnt<<endl;
    }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,cont=0;;
    cin>>n;
    string a;
    cin>>a;
    for(int i=0; i<n; i++)
    {
        a[i]=tolower(a[i]);
    }
    sort(a.begin(),a.end());
      for(int i=0; i<n; i++)
      {
          if(a[i]!=a[i+1])
          {
              cont++;
          }
      }
      if(cont==26)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;

}

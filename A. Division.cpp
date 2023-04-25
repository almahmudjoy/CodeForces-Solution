#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
      if(a<=1399)
      {
          cout<<"Division 4"<<endl;
      }
     else if(1400<=a && a <= 1599)
     {
          cout<<"Division 3"<<endl;
     }
     else if(1600<=a && a <= 1899)
       {
          cout<<"Division 2"<<endl;
     }
     else if(a>=1900)
       {
          cout<<"Division 1"<<endl;
     }
    }
}

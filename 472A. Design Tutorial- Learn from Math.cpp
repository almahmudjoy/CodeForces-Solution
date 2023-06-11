#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     long long n;
     cin>>n;
      bool printed = false;

     for(int i=1; i<n; i++)
     {
         for(int j=i-1; j>1; j--)
         {
             if(n%2==0)
             {
                 cout<<8<<" "<<n-8<<endl;
                 printed = true;
                 break;
                 //goto endloop;
             }
             else
             {
                 cout<<9<<" "<<n-9<<endl;
                 printed = true;
                 break;
                 //goto endloop;
             }
         }
         if(printed)
         {
             break;
         }

     }


//endloop:
return 0;
}

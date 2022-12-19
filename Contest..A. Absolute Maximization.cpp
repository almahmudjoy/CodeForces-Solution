#include<bits/stdc++.h>
using namespace std;

int main()
    {
        long long int a;
        cin>>a;
        while(a--)
        {
            int b;
            cin>>b;
            vector <int >ans(b);
            for(int j=0; j<b; j++)
            {
                cin>>ans[j];
            }
            int x= ans[0];
            int y= ans[0];
            for(int j=1; j<b; j++)
            {
                x = x | ans[j];
                y = y & ans[j];
            }
            cout<<x-y<<endl;
        }
    }


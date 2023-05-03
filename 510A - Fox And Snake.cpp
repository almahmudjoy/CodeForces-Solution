#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;
    for(int i=1; i<=a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(i%4==2)
            {
                if(j==b-1)
                {
                    cout<<"#";
                }
                else
                {
                    cout<<".";
                }
            }
            else if(i%4==0)
            {
                if(j==0)
                {
                    cout<<"#";
                }
                else
                {
                    cout<<".";
                }
            }
            else
            {
                cout<<"#";
            }
        }
        cout<<endl;
    }
}

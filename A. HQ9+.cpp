#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int flag=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]>=33&&a[i]<=126)
        {
            if(a[i]=='H' || a[i]=='Q' || a[i]=='9' )
                flag=1;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}

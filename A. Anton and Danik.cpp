#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,Anton,Danik;
    cin>>n;
    char s;

    Anton=0;
    Danik=0;
    for (i=1; i<=n; i++)
    {
        cin>>s;
        if(s=='A')
        {
            Anton+=1;
        }
        else
        {
            Danik+=1;
        }

    }
    if(Anton>Danik)
    {
        cout<<"Anton"<<endl;
    }
    else if(Anton<Danik)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }

}

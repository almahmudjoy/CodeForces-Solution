#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        string res="";
        int total=0;
        if(s[0]!='0')
            total=1;

        for(int i=1; i<s.length(); i++)
        {
            if(s[i]=='0')
                res+='+';
            else
            {
                if(!total)
                {
                    total+=1;
                    res+='+';
                }
                else
                {
                    total-=1;
                    res+='-';
                }
            }
        }
        cout<<res<<endl;
    }
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int a,b=0;
    string s;
    cin>>s;
    a=s.size();
    while(b<a)
    {
        if(s[b]== '.')
        {
            cout<<"0";
            b=b+1;
        }
        if((s[b]== '-')&&(s[b+1]=='.'))
           {
            cout<<"1";
                b=b+2;
        }
        if((s[b]== '-')&&(s[b+1]=='-'))
        {
            cout<<"2";
        b=b+2;
        }

    }
    }

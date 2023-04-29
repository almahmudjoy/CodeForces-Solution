#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    int cont=0;
    sort(s.begin(), s.end());
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='{' || s[i]==',' || s[i]==' ')
            {
                continue;
            }
            else
            {
                if(s[i]!=s[i+1])
                {
                    cont++;
                }
            }
    }
    cout<<cont-1;
}

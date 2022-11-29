#include<bits/stdc++.h>
using namespace std;
int main()
{
    int up=0, lo=0;
    string a;
    cin>>a;
    for(int i=0; i<a.size(); i++)
    {
        if(isupper(a[i]))
        {
            up++;
        }
        else
        {
            lo++;
        }
    }
        if(up<lo)
        {
            for(int i=0; i<a.size(); i++)
            {
                a[i]= tolower(a[i]);
            }
            cout << a << endl;
        }
        if (up>lo)
        {
            for(int i=0; i<a.size(); i++)
            {
                a[i]= toupper(a[i]);
            }
            cout<< a <<endl;
        }
        if (up==lo)
        {
            for(int i=0; i<a.size(); i++)
            {
                a[i]= tolower(a[i]);
            }
            cout << a << endl;
        }


}

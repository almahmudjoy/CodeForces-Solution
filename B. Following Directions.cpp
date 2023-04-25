/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0;
        int y = 0;
        int F=0;
        for (int i = 0; i < n; i++)
        {
            if (s == "L")
            {
                x--;
            }
            else if (s== "R")
            {
                x++;
            }
            else if (s== "U")
            {
                y++;
            }
            else if (s== "D")
            {
                y--;
            }
            if((x==1) && (y==1))
            {
                F=1;
                break;
            }
        }
        if (F==0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0;
        int y = 0;
        int F=0;
        for (int i = 0; i < n; i++)
        {
            if (s [i]== 'L')
            {
                x--;
            }
            else if (s [i]== 'R')
            {
                x++;
            }
            else if (s [i]== 'U')
            {
                y++;
            }
            else if (s [i]== 'D')
            {
                y--;
            }
            if((x==1) && (y==1))
            {
                F=1;
                break;
            }
        }
        if (F==0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}


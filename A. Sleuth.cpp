/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(int i=0; i<s.size(); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
            char t=s.size();
            if(s[t-2]=='a' || s[t-2]=='e' || s[t-2]=='i' || s[t-2]=='o' || s[t-2]=='u' || s[t-2]=='y' ||
                    s[t-2]=='A' ||  s[t-2]=='E' || s[t-2]=='I' || s[t-2]=='O' || s[t-2]=='U' || s[t-2]=='Y')
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }

        }
    }


*/


#include <bits/stdc++.h>
using namespace std;

int Vowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y');
}

int main()
{
    string s;
    getline(cin, s);

    int i = s.size() - 2;
    while (i >= 0 && s[i] == ' ')
    {
        i--;
    }
    int j = i;
    while (j >= 0 && s[j] != ' ')
    {
        j--;
    }

    if (Vowel(s[i]))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
           string s;
            cin>>s;



        //transform(s.begin(), s.end(), s.begin(), ::tolower);
        sort(s.begin(), s.end());


        if (s == "Timru") {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

}
}


#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    cin>>n;
    while(n--)
    {
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        int win1 = max(s1,s2);
        int loss1 = min(s1,s2);
        int win2 = max(s3,s4);
        int loss2 = min(s3,s4);
        if (loss1<=win2 && loss2<=win1){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


        int x,y,z;
        cin>>x>>y>>z;

        int maxi1 = max (x,y); //30,20=30
        int maxi2 = max(maxi1,z); // 30,10=30
        int mini = min (x,y); //7,1=1
        int mini2 = min(mini,z); //1,4=1

        int distance = maxi2 - mini2;

        cout<<distance <<endl;



}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int ans1 = a+b*c;
    int ans2 = a*(b+c);
    int ans3 = a*b*c;
    int ans4 = (a+b)*c;
    int ans5 = a+b+c;

    //int maxi=(max(ans1,ans2,(max(ans3,(max(ans4))))));
    int maximum=(max(ans5,(max(ans4,(max(ans3,(max(ans1,ans2))))))));
    cout<<maximum;

}

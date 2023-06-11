#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np; //3,4,5,10,8,100,3,1

    int kl = k*l; // 4*5=20
    int tost = kl/nl; // 20/3=6
    int slice = c*d; //10*8=80
    int solt = p/np; //100/1=100

    int x= min(tost,slice);  //(6,80)=6
    int y= min(x,solt);  // (6,100)=6
    int z= y/n;  //(6/3)=2

    cout<<z<<endl;



}


#include<bits/stdc++.h>
using namespace std;
int main(){
int t;

cin>>t;
while(t--){
    int n, c=0;
string s;
   cin>>n;
   cin>>s;

   for(int i=1;i<n;i+=3){
    if(s[i]!=s[i+1]){
        c=1;
        break;
    }
   }
   if(c==1){
    cout<<"NO"<<endl;
   }
   else{
    cout<<"YES"<<endl;
   }
}


return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
     int a;
    cin>>a;
    while(a--)
    {
       long long int n,m;
        cin>>n>>m;
         long long int x[n];
          long long int y[m];
           long long int sum=0;
        priority_queue <int, vector<int>, greater<int>> a;

        for(int i=0;i<n;i++){
        cin>>x[i];
        a.push(x[i]);
        }
        long long int ysum=0;
        for(int i=0;i<m;i++){
        cin>>y[i];
        }
       for(int i=0; i<m; i++) {
        a.pop();
        a.push(y[i]);
    }

    while(!a.empty()) {
        sum+=a.top();
        a.pop();
    }
    cout<<sum<<endl;
    }
}

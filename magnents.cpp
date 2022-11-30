#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
      int x[n];

    for(int i=0; i<n; i++)
        cin>>x[i];

    for(int i=0; i<n; i++)
    {
        if(x[i]!=x[i+1])
            c++;
    }
    cout<<c<<endl;
}

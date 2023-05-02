#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,cont=0;
    cin>>n;
    string arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]=="Tetrahedron")
        {
            cont+=4;
        }
        else if(arr[i]=="Cube")
        {
            cont+=6;
        }
        else if(arr[i]=="Octahedron")
        {
            cont+=8;
        }
        else if(arr[i]=="Dodecahedron")
        {
            cont+=12;
        }
        else if(arr[i]=="Icosahedron")
        {
            cont+=20;
        }
    }
    cout<<cont;
}

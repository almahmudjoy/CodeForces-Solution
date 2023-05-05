#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int police = 0;
    int crime = 0;
    for(int i=0; i<n;i++)
    {
        int a;
        cin>>a;
        if(a>0)
        {
            police+=a;
        }
        else
        {
            if(police<1)
            {
                crime++;
            }
            else
            {
                police--;
            }
        }
    }
    cout<<crime;
}

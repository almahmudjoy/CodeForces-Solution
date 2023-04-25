#include<bits/stdc++.h>
using namespace std;

int t, n, c;
int a[200005];

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> n >> c;
        for(int i = 0; i < n; i++) cin >> a[i];
        int l = 0, r = 0, cnt = 0, sum = 0;
        while(l <= r && r < n)
        {
            if(sum + a[r] <= c)
            {
                sum += a[r];
                cnt++;
                r++;
            }
            else
            {
                sum -= a[l];
                l++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

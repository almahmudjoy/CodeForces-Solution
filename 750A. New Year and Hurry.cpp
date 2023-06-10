
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int t = 240 - k; //105

    int solvedProblems = 0;
    int p = 5;
    for (int i = 1; i <= n; i++)
    {
        int x = p * i; //5*10=50

        if (t >= x)
        {
            t -= x; //105-
            solvedProblems++;
        }
        else
        {
            break;
        }
    }

    cout << solvedProblems << endl;

    return 0;
}



#include <bits/stdc++.h>
using namespace std;
#define crap                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)

int main()
{
    crap;
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;

        int c = INT_MAX, ans = 0;
        cin >> m >> n;
        int p[m];
        for (int i = 0; i < m; i++)
        {
            cin >> p[i];
        }

        if (n == 1)
            ans = -1;
        else
        {
            for (int i = 0; i < m; i++)
            {

                int num = 0;
                if (n % p[i] == 0)
                {

                    num = n / p[i];

                    if (c > num)
                    {
                        c = num;

                        ans = p[i];
                    }
                }
            }
        }
        if (ans == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}
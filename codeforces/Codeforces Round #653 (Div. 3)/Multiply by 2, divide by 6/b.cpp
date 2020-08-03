/*--------------------------"DeveshSingh"------"Delhi Technological UNIVERSITY"--------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define dbg(x) cerr << #x << " = " << x << endl
#define endl "\n"
#define int long long int
#define double long double
#define pb push_back
#define mp make_pair
#define PI acos(-1)

//const int INF=1e9+5;//billion
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

signed main()
{

    // freopen("input.txt", "r", stdin);
    crap;

    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> m;
        int res = 0;
        m[1] = 0;
        m[2] = -1;
        m[3] = 2;
        m[4] = -1;
        m[5] = -1;
        m[6] = 1;
        m[7] = -1;
        m[8] = -1;
        m[9] = 4;
        m[10] = -1;
        if (n > 10)
        {
            while (n > 10)
            {
                if (n % 6 != 0)
                {
                    if (n % 6 == 3)
                    {
                        n *= 2;
                    }
                    else
                    {
                        n = 2;
                    }
                }
                else
                    n /= 6;
                res++;
                // cout << n << endl;
            }
        }
        if (m[n] == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            res += m[n];
            cout << res << endl;
        }
    }

    return 0;
}

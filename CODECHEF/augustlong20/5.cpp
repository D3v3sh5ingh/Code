/*--------------------------"DeveshSingh"------"Delhi Technological UNIVERSITY"--------*/
/*------------------------------Knowledge is power/\---------------------------------*/
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
int primes[] ={ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89 };
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------Code is dope----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

signed main()
{

    // freopen("input.txt", "r", stdin);
    // crap;

    int t;

    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> m, q;
        int res = k;

        int dp[1005][1005];
        memset(dp, 0, sizeof(dp));
        m.clear();
        int table = 1;
        q.clear();
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (m[temp] > 0)
            {

                if (m[temp] == 1)
                {
                    res += 2;
                }
                else
                {
                    res += 1;
                }
                m[temp]++;

            }
            else
            {

                m[temp]++;
            }

            if (q[temp] > 0)
            {
                table++;
                q.clear();
            }
            q[temp]++;
        }

        cout << min(res, table * k) << endl;
    }
    return 0;
}
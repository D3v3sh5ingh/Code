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
    crap;

    int t;

    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> m;
        int res = INT_MAX, table=100;
        int a[n+1];
        int dp[102][1005], col[n+1][n+1];

        memset(dp, 0, sizeof dp);
        memset(col, 0, sizeof col);
        // for (int i=0;i<n+1;i++) {
        //     for (int j=0;j<n+1;j++)cout<<col[i][j]<<" ";
        //     cout<<endl;
        // }
        m.clear();
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            m.clear();
            for (int j=i;j<n;j++) {
                if (j==0)
                    col[i][j]=0;
                else
                    col[i][j]=col[i][j-1];
                if (m[a[j]]>0) {
                    if (m[a[j]]==1)
                        col[i][j]++;
                    col[i][j]++;
                }
                m[a[j]]++;
            }
        }
        for (int i=0;i<n+1;i++) {
            for (int j=0;j<n+1;j++)cout<<col[i][j]<<" ";
            cout<<endl;
        }
        for (int i=1;i<n+1;i++)dp[1][i]=col[0][i-1];

        for (int i=2;i<=table;i++) {
            for (int j=2;j<=n;j++) {
                int best=INT_MAX;
                for (int x=1;x<j;x++) {
                    best=min(best, dp[i-1][x]+col[x][j-1]);
                }
                dp[i][j]=best;
            }
        }
        for (int i=1;i<101;i++) {
            res=min(res, i*k+dp[i][n]);
        }

        cout << res << endl;
    }
    return 0;
}

// 4
// 5 1
// 5 1 3 3 3
// 5 14
// 1 4 2 4 4
// 5 2
// 3 5 4 5 1
// 10 2
// 1 2 3 4 1 2 3 4 4 4

// 3
// 17
// 4
// 7
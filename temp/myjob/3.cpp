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
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------Code is dope----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

void dfs(int &temp, map<int, vector<int>> r, int i, vector<int> &visited, int n)
{
    queue<int> q;
    for (int x : r[i])
    {
        q.push(x);
    }
    while (!q.empty())
    {
        int w = q.front();
        q.pop();
        if (visited[w] == false and w <= n)
        {
            temp++;
            visited[w] = true;
            for (int x : r[w])
            {

                q.push(x);
            }
        }
    }
}
signed main()
{

    // freopen("input.txt", "r", stdin);
    crap;

    int t;

    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, vector<int>> r;
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            r[a].push_back(b);
        }
        int res = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int temp = 1;
            vector<int> visited(n + 2, 0);
            dfs(temp, r, i + 1, visited, n);
            int road = n + 1 - temp;
            // cout << i << "  asdadsa       " << temp << endl;
            temp = 0;
            if (road < res)
            {
                res = road;
            }
        }
        cout << res << endl;
    }

    return 0;
}
// 1
// 4 8
// 1 2
// 1 3
// 1 4
// 2 3
// 2 4
// 2 5
// 2 6
// 1 5
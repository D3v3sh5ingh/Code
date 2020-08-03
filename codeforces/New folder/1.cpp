#include <bits/stdc++.h>

using namespace std;

#define f(i, a, b) for (int i = a; i < b; i++)
#define rep(i, n) f(i, 0, n)
#define fd(i, a, b) for (int i = a; i >= b; i--)
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vl vector<ll>
#define ss second
#define ff first
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define sz(a) a.size()
#define inf (1000 * 1000 * 1000 + 5)
#define all(a) a.begin(), a.end()
#define tri pair<int, pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000 * 1000 * 1000 + 7)

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin >> t;
    while (t--)
    {
        ll int n, m;
        cin >> n >> m;
        if (n == 1)
            cout << 0 << endl;
        // if(n==2)cout<<m<<endl;;
        else if (n >= 3)
            cout << 2 * m << endl;
        else
        {
            cout << m << endl;
        }
    }
    return 0;
}

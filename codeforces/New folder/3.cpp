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

void RecursiveBsearch(vector<int> &A, int start, int end, int &val, int n)
{
    if (val == n)
        return;
    // if (start > end)
    //     return;
    int mid = (start + end) / 2;
    if (start == end)
    {
        cout << start << " " << end << " " << val << endl;

        A[start] = val;
        val++;
    }

    if ((mid - start) > (end - mid))
    {
        RecursiveBsearch(A, min(start, mid - 1), max(mid - 1, start), val, n);
    }
    else
    {
        RecursiveBsearch(A, min(end, mid + 1), max(mid + 1, end), val, n);
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin >> t;
    while (t--)
    {
        ll int n;
        cin >> n;
        vector<int> res(n, 0);
        int l = 0, r = n - 1;
        int val = 1;
        RecursiveBsearch(res, l, r, val, n);
        rep(i, n)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

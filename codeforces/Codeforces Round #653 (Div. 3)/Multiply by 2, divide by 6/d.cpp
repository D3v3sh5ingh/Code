#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <climits>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
#define ll long long
#define pb push_back
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();
#define MOD 1000000007
ll add(ll x, ll y)
{
    ll res = x + y;
    return (res >= MOD ? res - MOD : res);
}
ll mul(ll x, ll y)
{
    ll res = x * y;
    return (res >= MOD ? res % MOD : res);
}
ll sub(ll x, ll y)
{
    ll res = x - y;
    return (res < 0 ? res + MOD : res);
}
ll lcm(ll x, ll y)
{
    ll res = (x * y) / __gcd(x, y);
    return res;
}
ll power(ll x, ll y)
{
    if (y < 0)
        return 1;
    ll res = 1;
    x %= MOD;
    while (y)
    {
        if (y & 1)
            res = mul(res, x);
        y >>= 1;
        x = mul(x, x);
    }
    return res;
}

void iofoj()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

void solution()
{
    ll n, m, i, j, k, l;
    cin >> n >> k;
    ll a[n];
    map<ll, ll> mp;
    ll ans = -1;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % k == 0)
            continue;
        ll x = k - (a[i] % k);
        if (mp.find(x) != mp.end())
            mp[x]++;
        else
            mp[x] = 1;
        ans = max(ans, (mp[x] - 1) * k + x);
        cout << ans << " " << x << " " << a[i] << endl;
    }

    // for(i=0;i<n;i++)
    // {
    //     if(a[i]%k)
    //     {
    //         l=k-(a[i]%k);
    //         if(mp[l]==0)
    //         {
    //             mp[l]=l;
    //             ans=max(ans,mp[l]);
    //         }
    //         else
    //         {
    //             mp[l]=mp[l]+k;
    //             ans=max(ans,mp[l]);
    //         }
    //     }
    // }
    cout << ans + 1 << "\n";
}

int main()
{
    fio
        //iofoj();
        ll t;
    cin >> t;
    while (t--)
        solution();
    return 0;
}

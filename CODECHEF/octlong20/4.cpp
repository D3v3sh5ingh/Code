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

signed main()
{

    // freopen("input.txt", "r", stdin);
    crap;

    int t;

    cin >> t;

    while (t--)
    {
        int n, x, p, k, res = 0;
        cin >> n >> x >> p >> k;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        int close = INT_MAX, ind = -1;
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == x)
            {
                if (abs(p - i) < close)
                {
                    ind = i;
                    close = abs(p - i);
                }
            }
        }

        if (a[ind] != x)
        {
            a[k - 1] = x;
            res++;
            sort(a.begin(), a.end());
        }
        if (a[p - 1] == x)
        {
            cout << res << endl;
            continue;
        }
        else if ((a[p - 1] < x && p < k) || (a[p - 1] > x && p > k))
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            close = INT_MAX, ind = 0;

            for (int i = 0; i < a.size(); i++)
            {
                if (a[i] == x)
                {
                    if (abs(p - i) < close)
                    {
                        ind = i;
                        close = abs(p - i);
                    }
                }
            }
            ind += 1;
            cout << abs(p - ind) + res << endl;
        }
    }
    return 0;
}

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
bool check(int n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}

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
        // vector<int> ans;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (check(n))
        {
            cout << -1 << endl;
        }
        else
        {
            int x = 4;
            for (int i = 1; i <= n; i++)
            {
                if (i == 1)
                {
                    cout << 2 << " ";
                    continue;
                }
                if (i == 2)
                {
                    cout << 3 << " ";
                    continue;
                }
                if (i == 3)
                {
                    cout << 1 << " ";
                    continue;
                }
                if (x == i)
                {
                    i++;

                    cout << i << " " << i - 1 << " ";
                    // ans.push_back(i);
                    // ans.push_back(i - 1);
                    x *= 2;
                }
                else
                {
                    // ans.push_back(i);
                    cout << i << " ";
                }
            }

            cout << endl;
            // for (int i = 0; i < ans.size() - 1; i++)
            // {
            //     cout << (ans[i] & ans[i + 1]) << " ";
            // }
        }
    }

    return 0;
}
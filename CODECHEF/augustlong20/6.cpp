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
#define int unsigned long long int
#define double long double
#define pb push_back
#define mp make_pair
#define PI acos(-1)
#define rep(i, n) for (int i = 0; i < n; i++)

//const int INF=1e9+5;//billion
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------Code is dope----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

int fact(int n);

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
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
        set<vector<int>> s;
        vector<int> arr, res(n % 1000000007, 0);
        rep(i, n)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp % 1000000007);
        }

        int factorial = 1;
        res[n - 1] = 1;
        for (int i = 2; i <= n; i++)
        {
            factorial = (factorial * 2) % 1000000007;
            res[n - i] = (factorial);
        }

        // sort(arr.begin(), arr.end());
        // vector<vector<int>> sub;
        // for (int i = 1; i < 1 << n; i++)
        // {
        //     int temp = i;
        //     int j = 0;
        //     vector<int> t;
        //     while (temp)
        //     {
        //         if (temp & 1) // if jth bit is set print a[j]
        //         {
        //             t.push_back(arr[j]);
        //         }
        //         temp >>= 1;
        //         j++;
        //     }

        //     // sort(t.begin(), t.end());
        //     if (s.find(t) != s.end())
        //         continue;
        //     else
        //     {
        //         sub.push_back(t);
        //     }
        //     // printf("\n");
        // }
        // map<int, int> m;
        // for (vector<int> i : sub)
        // {
        //     m.clear();
        //     int max = n;
        //     for (int j : i)
        //     {
        //         // cout<<j<<" ";
        //         m[j] = (m[j] + 1) % 1000000007;
        //         max = (m[j] > m[max]) ? j % 1000000007 : max % 1000000007;
        //     }
        //     // cout<<endl;
        //     // cout<<"max"<<max<<endl;
        //     if (max > n)
        //         continue;
        //     res[max - 1] = (res[max - 1] + 1) % 1000000007;
        // }
        for (int i : res)
        {
            cout << i % 1000000007 << " ";
        }
        cout << endl;
    }

    return 0;
}
// 3
// 3
// 2 2 3
// 2
// 1 2
// 3
// 1 2 2

// 1
// 2
// 12
// 2 1

// 1
// 2
// 3
// 12
// 23
// 13
// 123

// 4 2 1

// 2 2 3

// 2
// 2
// 3
// 2 2
// 2 3
// 2 3
// 2 2 3

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
// #define mp make_pair
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
        int n;
        cin >> n;

        map<int, int> mp;
        set<int> s;

        bool flag = false;
        for (int i = 0; i < n; ++i)
        {
            int temp;
            cin >> temp;
            s.insert(temp);
            if (++mp[temp] > 2)
                flag = true;
        }

        if (flag || mp[*(s.rbegin())] > 1)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {

            cout << "YES" << endl;
            for (auto &i : mp)
            {
                cout << i.first << " ";
                i.second -= 1;
            }
            stack<int> s;
            for (auto i : mp)
            {
                if (i.second >= 1)
                    s.push(i.first);
            }
            while (!s.empty())
            {
                cout << s.top() << " ";
                s.pop();
            }
            cout << endl;
        }
    }
    return 0;
}
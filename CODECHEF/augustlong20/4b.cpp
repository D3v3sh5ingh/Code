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


void solve(string s, string p) {
    map<char, int> m;

    m.clear();
    for (char i : p)
    {
        m[i]++;
    }
    string res = "";
    for (char i : s)
    {
        if (m[i] > 0)
        {
            m[i]--;
        }
        else
        {
            res += i;
        }
    }
    sort(res.begin(), res.end());
    string t = p;
    char to = t[0];
    int i = 0;
    while (res[i] <= to and i < res.size())
    {
        i++;
    }

    // dbg(res);
    // cout << s.substr(0, i + 1) << endl;
    // cout << i << " " << to << endl;
    int size = res.size() - i;
    string ans = res.substr(0, i) + p + res.substr(i, size);
    // cout << res.substr(0, i) << endl
    //      << p << endl;
    // cout << res.substr(i, size) << endl;

    cout << ans << endl;
}

signed main()
{

    // freopen("input.txt", "r", stdin);
    crap;

    int t;

    cin >> t;

    while (t--)
    {
        string s, p;
        cin >> s >> p;
        solve(s, p);


    }

    return 0;
}
// 8 akramkeenny
//     aka
//         aaaaaa
//             aa
//                 abcdef
//                     ef
//                         bbb
//                             bbb
//                                 dbccad
//                                     dad
//                                         akramkeeanany
//                                             aka
//                                                 supahotboy
//                                                     bohoty
//                                                         daehabshatorawy
//                                                             badawy

// akaeekmnnry
// aaaaaa
// abcdef
// bbb
// bccdad
// aaakaeekmnnry
// abohotypsu
// aabadawyehhorst

// akaeekmnnry
// aaaaaa
// abcdef
// bbb
// bccdad
// aaakaeekmnnry
// abohotypsu
// aabadawyehhorst
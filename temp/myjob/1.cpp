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

    int n, m;
    cin >> n;
    map<int, vector<int>> cust;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cust[a].push_back(b);
    }
    cin >> m;
    vector<vector<int>> st;
    int happy = 0, ser = 0;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        vector<int> temp = cust[a];
        bool done = false;
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] == b)
            {
                happy++;
                ser++;
                done = true;
                cust[a].erase(cust[a].begin() + i);
                // cust[a][i]=-1;
                break;
            }
        }
        if (!done)
        {
            vector<int> wq = {a, b};
            st.push_back(wq);
        }
    }
    for (int i = 0; i < st.size(); i++)
    {
        if (cust[st[i][0]].size() > 0)
        {
            ser++;
            cust[st[i][0]].erase(cust[st[i][0]].begin());
        }
    }
    cout << ser << " " << happy << endl;

    return 0;
}
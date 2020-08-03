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

    freopen("input.txt", "r", stdin);
    freopen("file.txt", "w", stdout);

    crap;

    int t;

    cin >> t;
    int cas = 1;
    while (cas <= t)
    {
        int n;
        cin >> n;
        vector<char> in, out;
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < n; i++)
        {
            char temp;
            temp = s1[i];
            // cout << " i " << s1[i] << endl;
            in.push_back(temp);
        }

        for (int i = 0; i < n; i++)
        {
            char temp;

            temp = s2[i];
            out.push_back(temp);
        }
        char res[n][n];
        for (int i = 0; i < n; i++)
        {
            res[i][i] = 'Y';
        }

        for (int i = 0; i < n; i++)
        {
            int j = i;
            while ((j--) > 0)
            {
                if (abs(i - j) > 1)
                {

                    if (in[j] == 'Y' and (out[j - 1] == 'Y') and res[i][j - 1] == 'Y')
                    {
                        res[i][j] = 'Y';
                        continue;
                    }
                    else if (in[j] == 'Y' and (out[j + 1] == 'Y') and res[i][j + 1] == 'Y')
                    {
                        res[i][j] = 'Y';
                        continue;
                    }
                    else
                    {
                        res[i][j] = 'N';
                        continue;
                    }
                }

                else if (i == j)
                    res[i][j] = 'Y';
                else if (out[i] == 'Y' and in[j] == 'Y')
                {
                    res[i][j] = 'Y';
                    continue;
                }
                else
                {
                    res[i][j] = 'N';
                }
            }
            j = i;
            while ((j++) < n)
            {
                if (abs(i - j) > 1)
                {

                    if (in[j] == 'Y' and (out[j - 1] == 'Y') and res[i][j - 1] == 'Y')
                    {
                        res[i][j] = 'Y';
                        continue;
                    }
                    else if (in[j] == 'Y' and (out[j + 1] == 'Y') and res[i][j + 1] == 'Y')
                    {
                        res[i][j] = 'Y';
                        continue;
                    }
                    else
                    {
                        res[i][j] = 'N';
                        continue;
                    }
                }

                else if (i == j)
                    res[i][j] = 'Y';
                else if (out[i] == 'Y' and in[j] == 'Y')
                {
                    res[i][j] = 'Y';
                    continue;
                }
                else
                {
                    res[i][j] = 'N';
                }
            }
        }
        cout << "Case #" << cas << ": " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                cout << res[i][j];
            }
            cout << endl;
        }
        cas++;
    }
    cout << endl;

    return 0;
}
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
/*----------JU IS LOVE----------*/
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
        cin>>n;
        int bal=0;
        bool res=true;
        int a=0,b=0,c=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp==5){
                a+=1;
            }
            else if(temp==10){
                a-=1;
                b+=1;
            }
            else {
                if(b>0){
                    b-=1;c+=1;
                }
                else{
                    a-=2;c+=1;
                }
            }
            if(  a<0 or b<0 or c<0){
                res=false;
            }
        }
        if(res)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}


// 5 10 15 15
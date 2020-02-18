#include <bits/stdc++.h>


using namespace std;

#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000*1000*1000+7)

int a[123456],b[123456];

int main(){
	std::ios::sync_with_stdio(false); cin.tie(NULL);
	ll int t;
	cin>>t;
	while(t--){
		ll int  n,i=0;
        cin>>n;
        vector<ll int> a; 
        rep(i,n){
            int t;
            cin>>t;
            a.push_back(t);
        }
        sort(a.begin(),a.end());
        // reverse(a.begin(),a.end());
        ll int res=0;
        res=a[0]%a[1];
        for(int i=2;i<n;i++){
            res=res%a[i];
            
        }
        cout<<res<<endl;
	}
	return 0;   
}

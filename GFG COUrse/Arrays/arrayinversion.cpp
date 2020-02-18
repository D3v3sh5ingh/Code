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

	int main(){
		std::ios::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			ll int n,j,i=0;
			cin>>n;
			ll int a[n+1];
            memset(a,0,sizeof(a));
			f(i,0,n)
			{
				cin>>a[i];
			}
            ll int count=0;
            f(i,0,n)
			{
				f(j,i,n){
                    if(a[i]>a[j]){
                        count++;
                    }
                }
			}
            cout<<count<<endl;		
		}
		return 0;   
	}

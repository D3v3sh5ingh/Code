		#include <bits/stdc++.h>

	using namespace std;

	#define f(i,a,b) for(int i=a;i<b;i++)
	#define rep(i,n) f(i,0,n)
	#define fd(i,a,b) for(int i=a;i>=b;i--)
	#define pb push_back
	#define mp make_pair
	#define vi vector< int >
	#define vl vector< ll >
	#define ss second
	#define ff first
	#define ll unsigned long long
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

    bool isPerfectSquare(long double x) 
{   
  long double sr = sqrt(x); 
   return ((sr - floor(sr)) == 0); 
} 

    bool checkbeauty(ll int x){
        ll int sum=0;
        // cout<<x;
        while(x){
            ll int temp=x%10;
            sum+=temp*temp;
            x/=10;
                
            // cout<<" x "<<sum<<endl;
        }
        // cout<< " " <<sum<<endl;
        if(isPerfectSquare(sum)){
            return true;
        }
        else{
            return false;
        }
    }
	int main(){
		std::ios::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			ll int n;
			cin>>n;
            string ar[3]={"1","34","122"};
            if(n<=10){
            cout<<ar[n-1]<<endl;
            }
            else{
                cout<<1;
                for(int i=0;i<n-3;i++){
                    cout<<0;
                }
                cout<<22<<endl;
            }
            }
			
		return 0;   
	}

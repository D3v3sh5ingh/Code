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
			// cin>>n;
            
            for(int i=1;i<=20;i++){
                n=i;
                ll int range=pow(10,n)+0.5;
                ll int srange=pow(10,n-1)+0.5,res=-1;

                // cout<<range<<endl;
                for(int i=srange;i<range;i++){
                    if(i%10!=0){
                        // cout<<"checking "<< i<<endl;
                        if(checkbeauty(i)){
                            res=i;
                            break;
                        }
                    }
                }
                cout<<"\""<<res<<"\""<<",";
                }
            }
			
		return 0;   
	}

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

vector <int> factors(int x) {
    vector <int> result;
    if(x==1){
        result.push_back(1);
    }
    else{
    int i = 1;
    while(i*i <= x) {
        if(x % i == 0) {
            result.push_back(i);
            if(x/i != i) {
                result.push_back(x/i);
            }
        }
        i++;
    }
    }
    return result;
}


int main(){
	std::ios::sync_with_stdio(false); cin.tie(NULL);
	ll int t;
	cin>>t;
	while(t--){
		ll int n,i,j,count=0,res=0;
        cin>>n;
        ll int a[n];
        map<ll int,int> mp;
        f(i,0,n){
            count=0;
            cin>>a[i];
            cout<<"currently"<<" "<<a[i]<<endl;
            vector <int> fact=factors(a[i]);
            for(int j=0;j<fact.size();j++){
                mp[fact[j]]++;
                cout<<fact[j]<< " " <<mp[fact[j]]<<" "<<endl;
                
                if(fact[j]>res){
                res=count;
                }
            }
        }
       
        cout<<res;
        
        cout<<endl;
	}
	return 0;   
}

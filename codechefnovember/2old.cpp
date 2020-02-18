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
			ll int n;
			cin>>n;
			int p[n];
            map<int,int> x;
            if(n==1){
                cout<<0<<endl;
            }
            else{
                p[0]=0;
                p[1]=0;
                x[0]=2;
                for(int i=2;i<n;i++){
                    for(int j=i-2;j>=0;j--){
                        if(p[i-1]==p[j]){
                            p[i]=i-1-j;
                            break;
                        }
                        else{
                            p[i]=0;                        
                        }
                    }
                    x[p[i]]++;
                }					
                
			for(int i=0;i<n;i++){
                cout<<p[i]<<",";
            }		
                // cout<<x[p[n-1]]<<endl;	c
            }
        }
		return 0;   
	}

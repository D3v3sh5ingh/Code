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
			vector<string> a;
			f(i,0,n)
			{
                string s;
                cin>>s;
                a.push_back(s); 
			}
            char q[n][10];
			for(int i=0;i<n;i++)
			{
                    for(int j=0;j<10;j++)
                    {
                       q[i][j]=a[i][j]; 
                       
                    }  
                    
			}
			ll int res=0,temp=0;
			for(int j=0;j<10;j++)
			{
                    int i=0;
					temp=0;
					while(i<n){
						// cout<<a[i][j];
                       if(a[i][j]=='1'){
                           temp++;
                       }
						i++;

					}
					// cout<<"j "<<temp;
					if(temp>0&&temp%2!=0){
                        res++;
                    }
                    // cout<<endl;
                    
			}
			
            cout<<res<<endl;            						
		}
		return 0;   
	}

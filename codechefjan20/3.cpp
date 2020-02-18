	#include <bits/stdc++.h>

	using namespace std;
	
	#define ulli unsigned long long int 
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
    
    int check(int n,int m, int i, int j, vector<vector< int > > a,int cntmax){
        int cnt=cntmax;
        int res=0;
        // cout<<cnt<<endl;
        while( (i+cnt<m and i-cnt>=0 and j+cnt<n and j-cnt>=0) == false){
            cnt--;;
        }
        // cout<<"checkpoint0 "<<cnt<<endl;
            
        while(i+cnt<m and i-cnt>=0 and j+cnt<n and j-cnt>=0 )
        {
            if(cnt==0)break;
            bool x=true;
            
            // cout<<"checkpoint1 "<<i<<" "<<j<<endl;
            for(int temp=1;temp<=cnt;temp++)
            {
                
                // cout<<"checkpoint2 "<<i<<" "<<j<<endl;
                if(a[i][j+temp]!=a[i][j-temp] or a[i-temp][j]!=a[i+temp][j])
                {
                    // cout<< a[i][j-temp]<<" checking row "<<a[i][j+temp]<<endl;
                    x=false;
                }
            }
            if(x==true){
                while(cnt>0){
                    
                res++;
                cnt--;

                }
            }
            else
            {
                cnt--;
            }
        }
        return res;
    }

    
    int main(){
		std::ios::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
            int n,m;
            cin>>m>>n;
            int res=n*m;
           vector< vector<int> >a; 
            for(int i=0;i<m;i++){
                vector<int>x;
                for(int j=0;j<n;j++){
                    int temp;
                    cin>>temp;
                    x.push_back(temp);
                }
                a.push_back(x);
            }
            for(int i=1;i<m-1;i++){
                for(int j=1;j<n-1;j++){
                    // cout<<"N" << j<<endl;
                    int cntmax=min(n,m)/2;
                    res+=check(n,m,i,j,a,cntmax);
                }
            }
            cout<<res<<endl;
		}
		return 0;   
	}

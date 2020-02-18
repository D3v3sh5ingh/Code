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
    
    // int check(int n,int m, int i, int j, vector<vector<int>> a){
    //     int cnt=1;
    //     int res=0;
    //     while(i+cnt<m and i-cnt>=0 and j+cnt<n and j-cnt>=0 ) //boundry condition check
    //     {
    //         bool x=true;
            
    //         // cout<<"checkpoint1 "<<i<<" "<<j<<endl;
    //         for(int temp=1;temp<=cnt;temp++)
    //         {
                
    //             // cout<<"checkpoint2 "<<i<<" "<<j<<endl;
    //             if(a[i][j+temp]!=a[i][j-temp] or a[i-temp][j]!=a[i+temp][j])
    //             {
    //                 // cout<< a[i][j-temp]<<" checking row "<<a[i][j+temp]<<endl;
    //                 x=false;
    //                 break;
    //             }
    //         }
    //         if(x==true){
    //             // cout<<i<<" i j "<<j<<endl;
    //             res++;
    //         }
                
    //         cnt+=1;
    //     }
    //     return res;
    // }

    
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
                    // res+=check(n,m,i,j,a);
                                            int cnt=1;
                                // int res=0;
                                while(i+cnt<m and i-cnt>=0 and j+cnt<n and j-cnt>=0 ) //boundry condition check
                                {
                                    bool x=true;
                                    
                                    // cout<<"checkpoint1 "<<i<<" "<<j<<endl;
                                    for(int temp=1;temp<=cnt;temp++)
                                    {
                                        
                                        // cout<<"checkpoint2 "<<i<<" "<<j<<endl;
                                        if(a[i][j+temp]!=a[i][j-temp] or a[i-temp][j]!=a[i+temp][j])
                                        {
                                            // cout<< a[i][j-temp]<<" checking row "<<a[i][j+temp]<<endl;
                                            x=false;
                                            break;
                                        }
                                    }
                                    if(x==true){
                                        // cout<<i<<" i j "<<j<<endl;
                                        res++;
                                    }
                                        
                                    cnt+=1;
                                }
                }
            }
            cout<<res<<endl;
		}
		return 0;   
	}

// 5 5
// 5 4 3 2 1
// 1 2 3 4 5
// 5 4 3 4 5
// 1 2 3 4 5
// 5 4 3 2 1

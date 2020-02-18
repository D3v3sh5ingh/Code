    #include <bits/stdc++.h>
    // #include <vector>
    // #include <set>
    // #include <map>
    // #include <string>
    // #include <cstdio>
    // #include <cstdlib>
    // #include <climits>
    // #include <utility>
    // #include <algorithm>
    // #include <cmath>
    // #include <queue>
    // #include <stack>
    // #include <iomanip>

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
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int match=n*(n-1);
            match/=2;
            if(match%n==0){
                // cout<<"YES"<<endl;
                    int i=0,j=0;
                    int mat[n][n];
                    int rows[n];
                    rep(i,n){
                        rows[i]=0;
                        rep(j,n){
                            mat[i][j]=0;
                            }
                        }        
            int x=0,y=0;
            int toplay=match/n;
            rep(x,n){
                rep(y,n){
                    if(x!=y){
                        if(mat[x][y]==0&&mat[y][x]==0&&rows[x]<toplay){
                                rows[x]++;
                                mat[x][y]++;
                        }
                    }
                }
            }
            int it=0;
            bool t=true;

            rep(it,n-1){
                // cout<<rows[i]
                if(rows[it]!=rows[it+1]){
                    t=false;
                }
                }
            if(!t){
                cout<<"NO"<<endl;
                x=0;y=0;
                rep(x,n){
                rep(y,n){
                    cout<<mat[x][y];
                }
                cout<<endl;
            }
            }
            else{
                cout<<"YES"<<endl;
                x=0;y=0;
                rep(x,n){
                rep(y,n){
                    cout<<mat[x][y];
                }
                cout<<endl;
            }
            }
                    
            } 
            else{
                cout<<"NO"<<endl;
            }  
            
            
        }
        return 0;   
    }

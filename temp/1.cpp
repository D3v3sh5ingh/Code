#include<bits/stdc++.h>
#define pb  push_back
#define ll long long 
#define fi first
#define sec second
#define MAX 500
using namespace std ;


int main()
 {
	// ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    vector<vector<int > > A = {{0,0},
    						 {0,0},
    						 {0,0},
    						 {1,0},
    						 {0,0}
							 };


  	int n = A.size();
    int m = A[0].size();
    if(n == 0 and m == 0){
        cout<< 0;exit(0);}
    if(A[0][0] == 1){
        cout<< 0;exit(0);}
    if(n == 1 and m == 1 and A[0][0] == 0)
        cout<< 1;
    int dp[n+1][m+1];
    int index ;
    for(int i = 0 ; i < n; ++i){
        if(A[i][0] == 1){
            index = i ;
            break;
        }
        else if(A[i][0] == 0){
            dp[i][0] = 1;
        }
    }
    for(int i = index; i < n ; ++i){
        dp[i][0] = 0;
    }
    for(int j = 0 ; j < m ; ++j){
        if(A[0][j] == 1){
            index = j;
            break;
        }
        else{
            dp[0][j] = 1;
        }
    }
    for(int j = index ; j < m ; ++j){
        dp[0][j] = 0;
    }
   	 for(int i = 0 ; i < n ; ++i){
    	for(int j = 0; j < m; ++j){
    		cout<<dp[i][j]<<' ';
    	}
    	cout<<'\n';
    }
    cout<<'\n';
    for(int i = 1; i < n ;++i){
        for(int j = 1; j < m ;++j){
            if(A[i][j] == 1)
                dp[i][j] = 0 ;
            else{
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
    }
    for(int i = 0 ; i < n ; ++i){
    	for(int j = 0; j < m; ++j){
    		cout<<dp[i][j]<<" ";
    	}
    	cout<<'\n';
    }
    cout<<dp[n-1][m-1];
  }
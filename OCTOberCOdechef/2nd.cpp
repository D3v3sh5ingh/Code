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

// int a[123456],b[123456];

int main(){
	std::ios::sync_with_stdio(false); cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		ll int n,m,q,i,q1,q2,res=0;
        cin>>n>>m>>q;
        int row[n];
        // row[n]={0};
        int col[m];
        // col[m]={0};
        f(i,0,n){
            row[i]=0;
        }
        f(i,0,m){
            col[i]=0;
        }
        f(i,0,q){
            cin>>q1>>q2;
            row[q1-1]++;
            col[q2-1]++;
        }
        ll o1=0,e1=0,o2=0,e2=0;

        f(i,0,n){
            if(row[i]%2==0){
                e1++;
            }
            else{
                o1++;
            }
        }
        f(i,0,m){
            if(col[i]%2==0){
                e2++;
            }
            else{
                o2++;
            }
        }
        res=e1*o2+e2*o1;
        // int j;
        // f(i,0,n){
        //     f(j,0,m){
        //         int temp=row[i]+col[j];
        //         // cout<<temp<<"    ";
        //         if(temp%2){
        //             res++;
        //         }
        //     }
        //                     // cout<<endl;

        // }
        cout<<res<<endl;
        
	}
	return 0;   
}

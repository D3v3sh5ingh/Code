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

// int a[123456],b[123456];

int main(){
	std::ios::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
        cin>>n;
        int a[n];
        int i;
        f(i,0,n){
            cin>>a[i];
        }
        vector<int> x;
        x.push_back(a[0]);
        x.push_back(a[1]);
        x.push_back(a[2]);
        if(x[1]>x[0]&&x[1]<x[2]){
            x.erase(x.begin()+1);    
        }
        else if()
        
       
        f(i,3,n){
            x.push_back(a[i]);
            sort(x.begin(),x.end());
             x.erase(x.begin()+1);
        }
        for(int i=0;i<x.size();i++){
            cout<<x[i]<<" ";
        }
        cout<<endl;
	}
	return 0;   
}

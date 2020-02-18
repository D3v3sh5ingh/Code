// https://www.codechef.com/OCT19B/problems/S10E
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
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int count=0,min;
		int a[n];
		bool test=false;
        for(int i=0;i<n;i++){
			cin>>a[i];
			min=a[i];
			test=false;
            for(int j=i-5;j<i;j++){
				if(j>=0&&min>=a[j]){
					test=true;
				}
			}
			
			if(test==false){
				count++;
			}
        }
		cout<<count<<endl;
	}
	return 0;   
}

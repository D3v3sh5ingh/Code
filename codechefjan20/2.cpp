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
ulli power1 (ulli x, ulli y)
{
    if (y == 0)
        return 1;
    else if ((y % 2) == 0)
        return power1 (x, y / 2) * power1 (x, y / 2);
    else
        return x * power1 (x, y / 2) * power1 (x, y / 2);

}

	int main(){
		std::ios::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			ulli  n;
            cin>>n;
            ulli  a,b,c,d,e,s;

			cin>>a;
            s=2*power1(10,n)+a;
            cout<<s<<endl;
            cin>>b;
			c=power1(10,n)-b;
            cout<<c<<endl;
            cin>>d;
            e=power1(10,n)-d;
            cout<<e<<endl;
            int res;
            cin>>res;
            if(res==-1)break;
		}
		return 0;   
	}

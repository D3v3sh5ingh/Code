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
// Example Input
// 3
// 3 1 2 2
// 2 1 1 1
// 3 2 2 1
// Example Output
// 2
// 2
// 2

// Explanation
// Example case 1: Ada can reverse the stack and then hit it two times. Before the first hit, the widths of bricks in the stack (from top to bottom) are (2,2,1). After the first hit, the topmost brick breaks and the stack becomes (2,1). The second hit breaks both remaining bricks.

// In this particular case, it is also possible to hit the stack two times without reversing. Before the first hit, it is (1,2,2). The first hit breaks the two bricks at the top (so the stack becomes (2)) and the second hit breaks the last brick.
	int main(){
		std::ios::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
            int s,w[3];
            cin>>s;
            for(int i=0;i<3;i++){
                cin>>w[i];
            }
            int sum=0,i=0,count=0;
            if(w[0]+w[1]+w[2]<=s){
                cout<<1<<endl;
            }
            else{
                if(w[0]+w[1]<=s || w[1]+w[2]<=s){
                    // cout<<"Bhencho"<<endl;

                    cout<<2<<endl;
                }
                else{
                    cout<<3<<endl;
                }
            }
            

		}            						
		
		return 0;   
	}

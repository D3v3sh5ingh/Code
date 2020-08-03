/*--------------------------"DeveshSingh"------"Delhi Technological UNIVERSITY"--------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap                     \
	ios::sync_with_stdio(false); \
	cin.tie(NULL);               \
	cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define dbg(x) cerr << #x << " = " << x << endl
#define endl "\n"
#define int long long int
#define double long double
#define pb push_back
#define mp make_pair
#define PI acos(-1)

//const int INF=1e9+5;//billion
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

int lar(int n)
{
	int largest = 0;

	while (n)
	{
		int r = n % 10;

		// Find the largest digit
		largest = max(r, largest);

		n = n / 10;
	}
	return largest;
}
int sma(int n)
{
	int smallest = 9;

	while (n)
	{
		int r = n % 10;

		// Find the smallest digit
		smallest = min(r, smallest);

		n = n / 10;
	}
	return smallest;
}

signed main()
{

	// freopen("input.txt", "r", stdin);
	crap;

	int t;

	cin >> t;

	while (t--)
	{
		int a, b;
		cin >> a >> b;
		b--;
		while (b--)
		{
			int d = lar(a);
			int c = sma(a);
			if (d == 0 || c == 0)
			{
				// a = 0;
				break;
			}
			a += (d * c);
		}
		cout << a << endl;
	}

	return 0;
}
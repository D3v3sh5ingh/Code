#include <bits/stdc++.h>
using namespace std;
#define  LL long long
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)
int main()
{
	fast_io;
    int t;
	cin >> t;
	while(t--)
	{   
        int c;
		cin>>c;
        int a[11]={ 0,1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        for(int i=10;c;){
            if(a[i]>c)
            {
                i--;
            }
            else{
                cout<<a[i]<<" ";
                c-=a[i];
            }
        }
        cout<<endl;

	}
    return 0;
}
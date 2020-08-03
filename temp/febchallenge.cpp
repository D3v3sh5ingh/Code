#include <bits/stdc++.h> 
using namespace std; 
  
  
int main() 
{ 
    int t;
    cin >> t;
    while (t--)
    {	int n;
		cin>>n;
		int a[n],d[n];
		for (int i=0;i<n;i++){
		cin>>a[i];
		}
        for (int i=0;i<n;i++){
		cin>>d[i];
	    }
        int ans=-1;
        for (int i=0;i<n;i++){
            int next=(i+1)%n;
            int pre;
            if(i-1<0)pre=n-1;
            else pre=i-1;
            if((a[next]+a[pre])<d[i])
            {   
                //cout<<d[i]<<endl;
                if(d[i]>ans)ans=d[i];
            }
	    }
        cout<<ans<<endl;
    } 
    
    return 0; 
} 
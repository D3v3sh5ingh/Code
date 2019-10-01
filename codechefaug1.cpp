#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define lli  long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> g(n),f(n),res(n,0);
        for(int i=0;i<n;i++){
            cin>>g[i];
            res[i]=g[i]*2;
        }
        for(int i=0;i<n;i++){
            cin>>f[i];
            res[i]-=f[i];
        }
        sort(res.begin(),res.end());
        if(res[res.size()-1]<0){
            cout<<0<<endl;
        }else{
        cout<<res[res.size()-1]*10<<endl;
        }
    }
    return 0;
}

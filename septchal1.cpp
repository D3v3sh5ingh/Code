#include<bits/stdc++.h> 

using namespace std;
#define lli long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>n>>k;
        vector<int>val;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            val.push_back(temp);
        }
        sort(val.begin(),val.end());
        lli res=0,count=1;
        for(int i=0;i<k;i++){
            res+=val[i];
        }
        for(int i=0;i<n;i++){
            res-=val[i];
            res+=val[(k+i)%n];
        }
        cout<<count<<endl;
        
    }
    return 0;
}
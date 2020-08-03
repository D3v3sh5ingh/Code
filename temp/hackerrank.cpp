#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        vector<int> h;
        vector<int> c;
        cin>>n;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            c.push_back(temp);
        }
        
        
       for(int x=0;x<n;x++){
            int temp;
            cin>>temp;
            h.push_back(temp);
        }
        vector<int>level(n,0);
        for(int i=0;i<n;i++){
            l=i-c[i];
            r=i+c[i];
            if(l<0)l=0;
            if(r>n-1)r=n-1;
            level[l]++;
            if(r!=n-1){
                level[r+1]-=1;
            }
        }
        for(int j=1;j<n;j++){
                level[j]+=level[j-1];
            }
        sort(level.begin(),level.end());

        sort(h.begin(),h.end());
        if(h==level){

            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        // for(int i=0;i<n;i++){
        //     cout<<c[i]<<" ";
        // }
        // cout<<endl;

        // for(int i=0;i<n;i++){
        //     cout<<level[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<h[i]<<" ";
        // }
        // cout<<endl;
    }
    return 0;
}

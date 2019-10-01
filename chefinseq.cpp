#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,k;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n>>k;
        vector<int>a;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        
        long long int msum=INT_MAX,prevsum=INT_MAX,res=1;
        for(int i=0;i<n;i++){
            int sum=0;
            cout<<"adding ";
            for(int j=i;j<i+k;i++){
                sum+=a[j];
                 cout<<a[i] <<" ";
            }
            cout<<endl;
            if(sum>msum)
            {
                prevsum=msum;
                msum=sum;
                res=1;
            }
            if(sum==msum){
                res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}

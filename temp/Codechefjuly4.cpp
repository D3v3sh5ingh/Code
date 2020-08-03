#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define lli  long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){
        lli n,penalty=0;
        cin>>n;
        vector <lli> a;

        for(lli i = 0;i<n;i++){
            lli temp;
            cin>>temp;
            a.push_back(temp);
        }
        // for(lli i = 0;i<a.size();i++){
        //     cout<<a.size()<<" good here"<<endl;
        //    cout<<a[i]<<endl;
        //    }
        for(lli j=0;j<n-1;j++)
        {
            lli sum=a[0]+a[1],low=0,index=0;
            for(lli i = 0;i<a.size()-1;i++){
                low=a[i]+a[i+1];
                if(low<sum){
                    sum=low;
                    index=i;
                }
            }
            a.erase(a.begin()+index,a.begin()+index+2);
            penalty+=sum;
            // cout<<j<<" j "<< sum<<" okay "<<penalty<<endl;
            a.insert(a.begin()+index,sum);
        //     for(lli i = 0;i<a.size();i++){
        //     cout<<a.size()<<" alele"<<endl;
        //    cout<<a[i]<<endl;
        //    }
        }
        // penalty+=a[0];
        for(lli i = 0;i<a.size();i++){
            // cout<<a.size()<<" damn"<<endl;
           cout<<penalty<<endl;
           }
    }
    return 0;
}

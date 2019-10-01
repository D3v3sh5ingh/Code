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
    while(t--)
    {
        lli n,k;
        cin>>n>>k;
        vector <lli> A(k,0),B(k,0);
        lli temp=n;
        for(lli i=0;temp>0;i++)
        {
            if(i==k-1){
                A[i]++;
                // cout<<temp<<" temp "<<i<<" ivalue "<<A[i]<<endl;
                i=-1;
                temp--;
            }else{
                A[i]+=1;
                // cout<<temp<<" temp2 "<<i<<" ivalue "<<A[i]<<endl;

                temp--;
            }
        }
        lli temp1=n;
        for(lli i=0;temp1>0;i++){
            if(k>n){
                // cout<<"reaching"<<endl;
                B[i]+=n;
                break;
            }
            else{
                if(i==k-1){
                B[i]+=k;
                temp1-=k;
                i=-1;
            }
            else{
                 B[i]+=k;
                temp1-=k;
            }
            }
        }
        // cout<<temp;
        string res="NO";
        // for(lli i=0;i<k;i++)
        // {
         
        //    cout<<A[i]<<" ";
        // }
        // cout<<endl;
        // for(lli i=0;i<k;i++)
        // {
        //    cout<<B[i]<<" ";
        // }
        // cout<<endl;
        for(lli i=0;i<k;i++)
        {
           if(A[i]!=B[i]){
               res="YES";
           }
        }
        cout<<res<<endl;
    }
    return 0;
}

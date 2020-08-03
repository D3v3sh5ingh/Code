#include <iostream>
#include<vector>
#include<algorithm>
#include<string.h>

using namespace std;
#define lli long long int 


int main()
{
    lli t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // bool done=false;
        string s[n];
        int res=214748364;
        int rowp1[n],rowp2[n];
        int p1=0,p2=0;
        
        for(int i=0;i<n;i++){
           cin>>s[i];
           rowp1[i]=rowp2[i]=0;
            for(int j=0;j<n;j++){
                // cin>>c[i][j];
                if(j<n/2&&s[i][j]=='1'){
                    p1++;
                    // cout<<"i"<<i<<" "<<"j"<<j<<endl;
                    rowp1[i]+=1;
                }
                else if(j>=n/2&&s[i][j]=='1'){
                    p2++;
                    rowp2[i]+=1;
                }
            }
        }
        res=abs(p1-p2);
        // cout<<p1</<p2<<endl;
        // cout<<res<<"dam"<<endl;
        // int temp=res;
        // int copy=res;
        // cout<<"w"<<res<<endl;
         for(int i=0;i<n;i++)
         {
            //  temp-=abs(rowp1[i]-rowp2[i]);
            //  temp+=abs(rowp2[i]-rowp1[i]);;
            int temp1=p1,temp2=p2;
            temp1-=rowp1[i];
            temp2-=rowp2[i];
            temp1+=rowp2[i];
            temp2+=rowp1[i];
            // cout<<"ROW"<<i<<" "<<abs(temp1-temp2);
            if(abs(temp1-temp2)<res){
                res=abs(temp1-temp2);
            }

            //  if(temp<res){
            //      res=temp;
            //  }
            //  temp=copy;
        }
        
        cout<<res<<endl;
    }
    
    return 0;
}
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define lli long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        double average=0;

        vector <lli> coins;
        for(int i=0;i<n;i++){
            int input;
            cin>>input;
            coins.push_back(input);
            // cout<<"i "<<i<<endl;
            average+=input;
        }
        average/=n;
        bool res=false;
        // cout<<" Getting average" <<average<<endl;
        // sort(coins.begin(),coins.end());
       double temp=average;
        for(int i=0;i<n;i++){
            double newaverage = ((average * n) - coins[i]) / (n - 1);
            // cout<<"removing "<<coins[i]<<" Getting average" <<newaverage<<endl;
            if(newaverage==temp&&res==false){
                cout<<i+1<<endl;
                res=true;
                break;
            }
        }
    if(res==false){cout<<"Impossible"<<endl;}
    }
    return 0;
}
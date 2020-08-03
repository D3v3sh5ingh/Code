#include <iostream>
#include <vector>
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
        int a[3],b[3];
        vector< pair <int,int> > vect; 

        cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2];
        for(int i =0;i<3;i++){
            vect.push_back( make_pair(a[i],b[i]) ); 
        }
        sort(vect.begin(), vect.end());
        bool res=true;
        for(int i=0;i<2;i++){
            if(vect[i].first==vect[i+1].first){
                if(vect[i].second!=vect[i+1].second){
                    res=false;
                    break;
                }
            }
            else{
                if(vect[i].second>=vect[i+1].second){
                    res=false;
                    break;
                }

            }
        }
        if(res){
            cout<<"FAIR"<<endl;
        }
        else{
            cout<<"NOT FAIR"<<endl;
        }
        
    }
    return 0;
}
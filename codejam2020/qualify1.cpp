#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int z=t;
    int casecount=1;
    while(t--)
    {   
        unsigned long long int n;
        cin>>n;
        vector< vector<int> >x;
        int rowcount=0,colcount=0,diagsum=0;
        bool test=false;
        map<int,int>mp;;
        for(int i=0;i<n;i++){
            mp.clear();
            test=false;
            vector<int>pu;
            for(int j=0;j<n;j++){
                int temp;
                cin>>temp;
                // x[i][j]=temp;
                pu.push_back(temp);
                mp[temp]++;
                if(i==j){diagsum+=temp;}
                if(mp[temp]>1 && test==false){
                    rowcount++;
                    test=true;
                }
            }
            x.push_back(pu);
        }
        for(int i=0;i<n;i++){
            mp.clear();
            test=false;
            for(int j=0;j<n;j++){
                mp[x[j][i]]++;
                if(mp[x[j][i]]>1 && test==false){
                    colcount++;
                    test=true;
                }
            }
        }
        
        
        // int casecount=1;

        cout << "Case #"<<casecount<<": "<<diagsum<<" "<<rowcount<<" "<<colcount<<endl;
        casecount++;
    }
    return 0;
}
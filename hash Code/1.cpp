#include<bits/stdc++.h>

using namespace std;
long long int findres(vector<long long int> vec, long long int l,long long int r){
    long long int size=vec.size();
    long long int res=;
    
}
int main(){
    long long int temp,m,n;
    cin>>m>>n;
    
    vector<long long int> vec;

    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp==m)
        {
            cout<<1<<endl<<i;
            break;
        }
        else {
            vec.push_back(temp);
        }
    }
    long long int res=findres(vec,0,n-1);

    
    return 0;
}
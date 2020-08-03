#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    vector <long long int> n;
    for (long long int i=0;i<t;i++){
        long long int temp;
        cin>>temp;
        n.push_back(temp);
    }
    int size=n.size();
    // cout<<n.size()<<"woohoo"<<t;
    sort(n.begin(),n.end());
    while(n[size-1]==n[size-2]){
        size--;
    }
    cout<<n[size-2]<<endl;
    return 0;
}
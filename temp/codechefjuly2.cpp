#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define lli unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        lli remainder,people,choclate;
        cin>>people>>choclate;
        if(people>choclate){
            remainder=choclate;
        }else{
            remainder=choclate%people;
        }
        if(people-remainder<remainder)remainder=people-remainder;
        cout<<remainder*2<<endl;
    }
    return 0;
}
//test on 1 3 10 
// 1 10 3
// 1 7 10
// 1 10 7


#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define lli long long int 
#define m 1000000007


lli func(lli i){
    string s=to_string(i);
    lli length=s.size();
    
    for(lli i=0;i<length-1;i++){
        if(s[i]==s[i+1])
        {
            lli j=i+1;
            while((j<s.length())&&(s[i]==s[j])){/**/
                s[j]='0';
                j++;
            }
            i=j;
            /**/
            i--;
        }
    }
    lli fx=stoll(s);
    return fx;
}

int main()
{
    lli t;
    cin>>t;
    while(t--){
        lli nl,nr;
        lli l,r,res=0;
       cin>>nl>>l>>nr>>r;
       for(lli i=l;i<=r;i++){
            res=((res)%m+(func(i)%m)%m);
        }
        cout<<res<<endl;
    }
    return 0;
}
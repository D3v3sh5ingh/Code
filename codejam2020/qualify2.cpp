#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int casecount=1;
    while(t--)
    {   
        string s,res="";
        int open=0;
        res.clear();
        s.clear();
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]-48==open){
                res+=s[i];
            }

            if(s[i]-48>open){
                while(s[i]-48>open){
                    res+="(";
                    open++;
                }
                res+=s[i];
            }
            
            if(s[i]-48<open){
                while(s[i]-48<open){
                    res+=")";
                    open--;
                }
                res+=s[i];
            }
        }

        while(open){
            res+=")";
            open--;
        }
        cout << "Case #"<<casecount<<": "<<res<<endl;
        casecount++;
    }
    return 0;
}
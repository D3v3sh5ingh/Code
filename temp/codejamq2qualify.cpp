#include <iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    int casecount=1;
    while(t--)
    {   
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        cout << "Case #"<<casecount<<": ";
        casecount++;
        long long int size= s.size();
        for (int i=0;i<size;i++){
            if(s[i]=='E')cout<<'S';
            else cout<<'E';
        }
        cout<<endl;
    }
    return 0;
}
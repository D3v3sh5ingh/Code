#include <iostream>
#include<vector>

using namespace std;

int main(){
    int t;
            int casecount=1;

    cin>>t;
    while(t--)
    {   
        string str;
        cin>>str;
       // cout<<"t"<<t<<"str"<<str<<endl;
        int c=str.size();
        int x[c]={0};
        int y[c]={0};
        int b=0;
    //    cout<<"c"<<c<<endl;
        //str[c-1]=str[c-1]-'0';
        str[c-1]--;
        y[c-1]=1;
        while(b!=c)
        {
            if(str[b]=='4')
            {
                x[b]=3;
                y[b]++;
            }
            else
            {
                x[b]=str[b]-'0';
            }
            b++;
        }
        cout << "Case #"<<casecount<<": ";
        casecount++;
        bool a=false;bool b1=false;
            
        for(int i=0;i<c;i++){
            if(a==false && x[i]!=0){
                a=true;
                cout<<x[i];
            }    
            else if(a==true){
                cout<<x[i];
            }
        }
        cout << " ";
        for(int i=0;i<c;i++){
            if(b1==false && y[i]!=0){
                b1=true;
                cout<<y[i];
            }    
            else if(b1==true){
                cout<<y[i];
            }
        }
        
    }
    return 0;
}
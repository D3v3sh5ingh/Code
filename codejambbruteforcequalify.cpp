#include <iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {   
        unsigned long long int a;
        cin>>a;
        vector<int>x;
        vector<int>y;
        int casecount=1;

       // cout<<"t"<<t<<"str"<<str<<endl;
        while(a){
            int temp=a%10;
            if(temp==4){
                x.push_back(3);
                y.push_back(1);
            }
            else
            {
                x.push_back(temp);
                y.push_back(0);
            }
            a/=10;            
        }
        int p=x.size(),q=y.size();
        cout << "Case #"<<casecount<<": ";
        casecount++;
        // cout<<p<<endl<<q;       
        for (int i=p-1;i>=0;i--){
            cout<<x[i];
        }
        cout<<" ";
        bool b=false;
        for (int i=q-1;i>=0;i--){
            if(b==false && y[i]!=0){
                b=true;
                cout<<y[i];
            }    
            else if(b==true){
                cout<<y[i];
            }
        }
        cout<<endl;
        //str[c-1]=str[c-1]-'0';
        
    }
    return 0;
}
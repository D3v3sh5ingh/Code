#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
#define lli long long int 

void decr(string p,int k){
    for(int i=0;i<p.size();i++){
        int temp=(int)p[i]-64;
        temp=27-temp;
        p[i]=char(temp+64);
        // cout<<p[i]<<" ";
    }
    int tempx=p.size();
    // cout<<tempx<<endl;
    int collen=0,x=k;
    vector<int>keys;
    while(x){
        int w=x%10;
        keys.push_back(w);
        collen++;
        x/=10;
    }
    // for(int i=0;i<keys.size();i++){
    //     cout<<keys[i];      
    // }

    int row=(tempx%collen==0)?tempx/collen:((tempx/collen)+1);
    char mat[row][collen];
    // cout<<row<<" "<<collen<<endl;
    int counter=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<collen;j++){
            if(counter<tempx){
                mat[i][j]=p[counter];
                counter++;
            }
            else{
                mat[i][j]='X';
                // cout<<counter<<endl;
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<collen;j++){
            cout<<mat[i][j]<<" ";
        }cout<<endl;
    }
    vector<int>sequence;
    int count=0;
    while(count<collen){
        for(int i=0;i<keys.size();i++){
            if(count==keys[i]){
                int var=collen-i-1;
                sequence.push_back(var);
                // cout<<count<<" "<<sequence[i]<<endl;
                count++;
                break;
            }
        }
    }
    // for(int i=0;i<keys.size();i++){
    //     cout<<sequence[i]<<" ";      
    // }
    bool dir=true; //true for going down and vice versa for false
    for(int i=0;i<collen;i++){
        int toprint=sequence[i];
        if(dir)
        {
            for(int j=0;j<row;j++){
                cout<<mat[j][toprint];
            }
        }
        else
        {
            for(int j=row-1;j>=0;j--){
                cout<<mat[j][toprint];
            }
        }
        dir=(dir)?false:true;
    }
    

}
int main()
{
    int k;
    string p;
    cin>>p>>k;
    decr(p,k);  
    return 0;
}
#include <iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<map>
using namespace std;
#define lli long long int 

int modInverse(int a, int m)
{ 
    a = a%m; 
    int temp;
    for (int x=1; x<m; x++) 
       if ((a*x) % m == 1) 
          return x; 
} 

void decr(string p,int k1,int k2){
    // string res;
    map<char,int> m1;
    map<int,char> m2;
    for(int j = 65;j<91;j++){
        m1[(char)j] = j-65;
    }
    for(int j = 0;j<26;j++){
        m2[j] = (char)(j+65);
    }
    int k2inv=modInverse(k2,26);
    int size = p.length();
    for(int i=0;i<size;i++)
    {
        //int temp=int(p[i]);
        int key = m1[p[i]];
        int diff;
        //cout<<"key="<<key<<endl;;
        diff = key - k1;
        if(diff<0){
            diff+=26;
        }
        int temp1=((diff)*k2inv)%26;
       //cout<<"temp1="<<temp1<<endl;
        cout<<m2[temp1];
        /*diff = m[(char)i]-k1;
        if(diff<0){
            diff+=26;
        }
        cout<<
        // res[i];*/
    }
}

int main()
{
    int k1,k2;
    string p;
    cin>>p>>k1>>k2;
    decr(p,k1,k2);  
    return 0;
}
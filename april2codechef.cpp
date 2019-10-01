#include<bits/stdc++.h> 
using namespace std; 
  
void subString(string s, int n, char x)  
{   
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count=0;
    for (int i = 0; i < n; i++){  
        for (int len = 1; len <= n - i; len++){
            string temp=s.substr(i, len); 
           int y=-1;
           y=temp.find(x);
            if(y!=-1){
              //   cout<<temp<<endl;

                count++;
            } 
        }
    }
    cout << count << endl;      
} 
  
int main()  
{   int t;
    cin>>t;
    while(t--)
    {
        int size;
        cin>>size;
        string s;
        cin>>s;
        char x;
        cin>>x; 
        subString(s,s.length(),x); 
        
    }
    return 0; 
} 
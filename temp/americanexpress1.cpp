#include<bits/stdc++.h> 
using namespace std;
#define lli  long long int

lli fib(lli n) 
{ 
  /* Declare an array to store Fibonacci numbers. */
  lli f[n+2];   // 1 extra to handle case, n = 0 
  lli i; 
  
  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      /* Add the previous 2 numbers in the series 
         and store it */
      f[i] = f[i-1] + f[i-2]; 
  } 
  
  return f[n]; 
} 
lli findlog(lli n){
    lli res=0;
    if (n == 0)  
        return 0;  
    while (n != 1)  
    {  
        res++;
        n = n/2;  
    }  
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        vector<lli> fib;
        cin>>n;
        lli f=0,t=1;
        fib.push_back(f);
        fib.push_back(t);
        
        for(int i=2;i<n;i++)
        {
            
            fib.push_back(fib[i-1]+fib[i-2]);
            fib[i]=fib[i]%10;
        }
        cout<<"original"<<" ";
         for(int i=0;i<fib.size();i++)
            {
                cout<<fib[i]<<" ";
            }
            cout<<endl;
        // lli res=findlog(n);
        // lli index=pow(2,res);
        // cout<<"index "<<index<<endl;
        // cout<<fib(index)<<endl;
        // cout<<index<<" Index"<<endl;
        // cout<<(fib(index-1)%10)<<endl;
        while(fib.size()!=1)
        {
            for(int i=0;i<fib.size();i+=1)
            {   
                // cout<<"erasing"<<fib[i]<<endl;
                fib.erase (fib.begin()+i);
            }  
            
        for(int i=0;i<fib.size();i++)
            {
                cout<<fib[i]<<" ";
            }
            cout<<endl;
        }
            
        for(int i=0;i<fib.size();i++)
            {
                cout<<fib[i]<<" "<<endl;
            }
    }
    return 0;
}

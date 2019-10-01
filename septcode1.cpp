#include<bits/stdc++.h> 
using namespace std;
#define lli  unsigned long long int
typedef long long int ll; 
  
// Finds nth fibonacci number 
lli fib(lli f[], lli n) 
{ 
    // 0th and 1st number of 
    // the series are 0 and 1 
    f[0] = 0; 
    f[1] = 1; 
  
    // Add the previous 2 numbers  
    // in the series and store  
    // last digit of result 
    for (lli i = 2; i <= n; i++) 
        f[i] = (f[i - 1] + f[i - 2]) % 10; 
  
    return f[n]; 
} 
  
// Returns last digit of n'th Fibonacci Number 
lli findLastDigit(lli n) 
{ 
    lli f[60] = {0}; 
  
    // Precomputing units digit of   
    // first 60 Fibonacci numbers 
    fib(f, 60); 
  
    return f[n % 60]; 
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
        cin>>n;
        lli res=findlog(n);
        lli index=pow(2,res);
        cout<<findLastDigit(index-1)<<endl;
      
    }
    return 0;
}

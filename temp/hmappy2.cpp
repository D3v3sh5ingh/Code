#include <bits/stdc++.h> 
using namespace std; 
#define ulli unsigned long long int 

ulli gcd(ulli a, ulli b)  
 {  
    // Everything divides 0  
    if (a == 0 || b == 0)  
        return 0;  
   
    // Base case     
    if (a == b)  
        return a;  
   
    // a is greater  
    if (a > b)  
        return gcd(a-b, b);  
    return gcd(a, b-a);  
 } 
 ulli lcm(ulli a,ulli b)  
 {  
    return (a*b)/gcd(a, b);  
 }  
int main() 
{ 
    int t;
    cin >> t;
    while (t--)
    {	ulli n,a,b,k,c=0;
        bool yo=false;
		cin>>n>>a>>b>>k;
		ulli dba,dbb,dbl;
		dba=n/a;
		dbb=n/b;
		dbl=n/lcm(a,b);
        //cout<<dba<<" "<<dbb<<" "<<dbl<<" "<<k<<" "<<endl;
		if(dba+dbb-dbl>k)cout<<"Win";
		else cout<<"Lose"<<endl;
    }
return 0; 
} 

#include <iostream>
#include<string>
#include<algorithm>

using namespace std;
#define lli long long int;


char NthCharacter(int n) 
{ 
    // initially null string 
    string s = ""; 
  
    // starting integer 
    int c = 1; 
  
    // add integers in string 
    for (int i = 1;; i++) { 
  
        // one digit numbers added 
        if (c < 10) 
            s += char(48 + c); 
  
        // more than 1 digit number, generate 
        // equivalent number in a string s1 
        // and concatenate s1 into s. 
        else 
        { 
            string s1 = ""; 
            int dup = c; 
  
            // add the number in string 
            while (dup) { 
                s1 += char((dup % 10) + 48); 
                dup /= 10; 
            } 
  
            // reverse the string 
            reverse(s1.begin(), s1.end()); 
  
            // attach the number 
            s += s1; 
        } 
        c++; 
  
        // if the length exceeds N 
        if (s.length() >= n) { 
            return s[n - 1]; 
        } 
    } 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int res=0;
    while(t--){
        int n;
        cin>>n;
        // int res;
        res+=(NthCharacter(n)-'0');
    }
    cout<<res<<endl;
    return 0;
}
#include <iostream>
#include<string>
#include<algorithm>

using namespace std;
#define lli long long int

lli rev(lli num) 
{ 
    lli rev_num = 0; 
    while (num > 0) 
    { 
        rev_num = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return rev_num;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        lli x,y;
        string str,str2;
        cin>>str>>str2;
        reverse(str.begin(), str.end());
        reverse(str2.begin(), str2.end());
        cout<<str<<" "<<str2<<endl;
        x = stoll(str,nullptr,10);
        y= stoll(str2,nullptr,10);
        x+=y;
        x = rev(x);
        cout<<x<<endl;
    }
    return 0;
}
#include <iostream> 
#include<bits/stdc++.h>
 using namespace std;
 int number =2;

int func(int a, int b){
     return a+b;
}

int func(int a, int b,int c){
     return a*b*c;
}
  int main()
{
     
      int x=2,y=3;
      int  *  const ptr=&x;
      
      cout<<ptr<<" "<<*ptr<<endl;
     (*ptr)++;
     cout<<ptr<<" "<<*ptr;
     return 0;
     }
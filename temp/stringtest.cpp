// Example program
#include <iostream>
#include <string>
using namespace std;
int maxArr(vector<int> &a) {
    int sum,large=0;
    for(int i=0;i<a.size();i++){
        sum=0;
        for(int j=i;j<a.size();j++){
            sum=abs(a[i]-a[j])+abs(i-j);
            if(sum>large){
                large=sum;
            }
        }
    }
    cout<<large<<endl;
}

int main()
{
  int i=12;
  string temp=to_string(i);
  cout<<temp.size();
  return 0;
}

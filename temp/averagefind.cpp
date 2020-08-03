#include <iostream>

using namespace std;
#define lli long long int

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    float t;
    t=0;
    float sum=0,count=0;
    while(t!=-1)
    {
     cin>>t;
     sum+=t;
     count++;   
    }
    sum-=-1;
    count--;
    cout<<"TOTAL COUNT IS "<<count <<". sum is "<<sum<<endl;cout<<"Average is :"<<float(sum/count)<<endl;
	char ch='n';
	while(ch!='y'&&ch!='Y'){
	cout<<"Enter 'y' to exit"<<endl;
	// cout<<ch<<endl;
    cin>>ch;
	}
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	char ch;
	int c;
	int thread,k;
	cin>>s>>ch>>thread>>k;
	c=int(ch)-48;
	int pos=0;
	int len=s.length();
	while(k){
		for(int i=1;i<=thread;i++){
			cout<<"Thread"<<i<<": ";
			for(int j=0;j<c;j++,pos++){
			    if(pos>=len){
				    pos=0;
    			}
			cout<<s[pos];
			}
			cout<<endl;
		}
		k--;
	}
	return 0;
}
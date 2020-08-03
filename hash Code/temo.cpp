#include<bits/stdc++.h> 

using namespace std;
#define lli long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fstream f,out;
    f.open("input.in");
    out.open("output.ou");

    int t;
    f>>t;
    out<<t<<" Bhencho"<<endl;
    cout<<t<<endl;
    while(t--){
        int n;
        f>>n;
        out<<n<<" Bhencho"<<endl;
    
        for(int i=0;i<n;i++){
            int temp;
            f>>temp;
            cout<<temp<<" ";
            out<<temp<<" Bhencho"<<endl;
    
        }
        cout<<endl;
    }
    f.close();
    out.close()
    return 0;
}
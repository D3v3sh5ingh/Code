#include <iostream>

using namespace std;
#define lli long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli m,n;
    cin>>m>>n;
    lli res=(m*n%2==0)?(m*n)/2:((m*n)/2)+1;
    cout<<res<<endl;
    return 0;
}
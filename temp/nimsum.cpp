
#include <iostream>

using namespace std;
#define lli long long int;

int calculateNimSum(int piles[], int n) 
{ 
    int i, nimsum = piles[0]; 
    for (i=1; i<n; i++) 
        nimsum = nimsum ^ piles[i]; 
    return(nimsum); 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int res=calculateNimSum(arr,n);
        if(res==0){
            cout<<"Isa"<<endl;
        }
        else{
            cout<<"Gaitonde"<<endl;
        }
        
    }
    return 0;
}
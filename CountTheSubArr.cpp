#include <iostream>
#include <vector>
using namespace std;
  
int countSubArrayProductLessThanK( const vector<int>& a,long long k)
{
    const int n = a.size();    
    long long p = 1;
    int res = 0;
    for (int start = 0, end = 0; end < n; end++) {
 
        p *= a[end];
         
        while (start < end && p >= k) 
            p /= a[start++];        
         
        if (p < k) {
            int len = end-start+1;
            res += len;
        }
    }
 
    return res;
}
 int main()
        { 
            int t; cin>>t;
            while(t--)
            {   long long int size,k; 
                cin>>size>>k;
                vector <int>a; 
                for(int i=0;i<size;i++){
                    int temp;
                    cin>>temp;
                    a.push_back(temp);
                    } 
            cout<<countSubArrayProductLessThanK(a,k)<<endl; 
            }
            return 0;
        }
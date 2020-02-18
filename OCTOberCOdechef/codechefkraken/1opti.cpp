#include "bits/stdc++.h"
using namespace std;
int SD() {int i ; scanf("%d" , &i); return i;}
const int AKA = 1e6+6;
int a[AKA] , cnt[AKA] , n , maxElement = INT_MIN , ans;
void countTotalIncreasingSubsequences()
{
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = a[i]-1 ; j >=0; --j)
            cnt[a[i]] += cnt[j];
        ++cnt[a[i]];
    }
    for(int i = 0 ; i <= maxElement ; ++i)
        ans+=cnt[i];
    printf("%d" , ans);
}
int main()
{
    n = SD();
    for(int i = 0 ;  i < n ; ++i)
        maxElement = max(a[i] = SD() , maxElement);
    countTotalIncreasingSubsequences();
}

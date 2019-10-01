#include <bits/stdc++.h>

using namespace std;


// Complete the activityNotifications function below.
int activityNotifications(vector<int> expenditure, int d) {
    long long int size=expenditure.size();
    long long int count=d;int res=0;
    int median=(count%2==0)?(expenditure[count/2]+expenditure[count/2+1])/2:expenditure[count/2];
    for(long long int i=d;i<size;i++){
        if(expenditure[i]>=2*median)
        {
            res++;
            count++;
        }
        else{
            count++;
        }
        median=(count%2==0)?(expenditure[count/2]+expenditure[count/2+1])/2:expenditure[count/2];
    }
return res;
}

int main()
{
   int n,d;
   cin>>n>>d;
   vector<int>exp;
   for(int i=0;i<n;i++){
       int temp;
       cin>>temp;
       exp.push_back(temp);
   }
   cout<<activityNotifications(exp,d);
   return 0;
}
    
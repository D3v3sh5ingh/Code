#include <bits/stdc++.h> 
#include<unordered_map> 

using namespace std; 

static int k;
int findarraysum(vector <int>arr, int n, int sum)
{
	int count = 0;

	for( int start = 0 ; start < n ; start++ )
	{
		int curr_sum = 0;
		for( int end = start ; end < n ; end++ )
		{
			curr_sum += arr[end];
			if( curr_sum == sum && end-start==k-1  )
			{
				// std::cout<<"( "<<start<<" , "<<end<<" )"<<std::endl;
				count++;
			}
		}
	}

	return count;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n>>k;
        int a[n];
		vector<int>val;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            a[i]=temp;
            val.push_back(temp);
        }
        sort(val.begin(),val.end());
        int sum=0;
		// cout<<"Main"<<endl;
        for(int i=0;i<k;i++){
            sum+=a[i];
			// cout<<a[i]<<" ";
        }
		// cout<<endl<<"sum"<<sum<<endl;
        cout<<findarraysum(val, n, sum)<<endl;
    }
    return 0;
}

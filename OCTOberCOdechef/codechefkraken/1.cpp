#include<bits/stdc++.h> 
using namespace std; 
int countSub(int arr[], int n) 
{ 
	int count[10] = {0}; 
	for (int i=0; i<n; i++) 
	{ 
		for (int j=arr[i]-1; j>=0; j--) 
			count[arr[i]] += count[j]; 
		count[arr[i]]++; 
	} 
	int result = 0; 
	for (int i=0; i<10; i++) 
		result += count[i]; 

	return result; 
} 

int main() 
{ 
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 

	cout << countSub(arr,n)<<endl; 
	return 0; 
} 

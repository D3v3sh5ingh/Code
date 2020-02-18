#include<bits/stdc++.h>

using namespace std;

// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
int* merges(int arr_left[],int sz_left, int arr_right[], int sz_right){
    /* declaring an array using dynamic allocation of memory. 
        Merged the given two arrays into this third output Array */
    int* arr_merged = new int [sz_left+sz_right];
    int done=0;
    int i=0,j=0,count=0;
    while(count<sz_left+sz_right)
    {
        if(i<sz_left and j<sz_right){    
            if(arr_left[i]<arr_right[j])
            {
                cout<<arr_merged[count]<<" ";
                arr_merged[count]=arr_left[i];
                count++;
                i++;
            }
            if(arr_left[i]>=arr_right[j])
            {
                arr_merged[count]=arr_right[j];
                count++;
                j++;
            }
        }
        else{
            if(j>=sz_right){
                while(i<sz_left){
                    arr_merged[count]=arr_left[i];
                    count++;
                    i++;
                }
            }
            if(i>=sz_left){
                while(j<sz_left){
                arr_merged[count]=arr_right[j];
                count++;
                j++;
                }
            }
        }
    }
    // Add your code below this line. Do not modify any other code.




    // Add your code above this line. Do not modify any other code.
    /* retun the merged array */
    return arr_merged;
}

int main()
{
    merges({2,5,7,8,9},5,{9},1);
    return 0;
}

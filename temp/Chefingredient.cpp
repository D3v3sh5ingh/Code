# include <stdio.h> 
#include<iostream>
# include <stdlib.h> 
#include<string.h>	
#include<vector>
# define NO_OF_CHARS 256 
# define bool int 
using namespace std;
/* Function removes duplicate characters from the string 
This function work in-place and fills null characters 
in the extra space left */
string removeDuplicatesFromString(string str) 
{ 
  
    // keeps track of visited characters 
    int counter = 0; 
  
    int i = 0; 
    int size = str.size(); 
  
    // gets character value 
    int x; 
  
    // keeps track of length of resultant string 
    int length = 0; 
  
    while (i < size) { 
        x = str[i] - 97; 
  
        // check if Xth bit of counter is unset 
        if ((counter & (1 << x)) == 0) { 
  
            str[length] = 'a' + x; 
  
            // mark current character as visited 
            counter = counter | (1 << x); 
  
            length++; 
        } 
        i++; 
    } 
  
    return str.substr(0, length); 
} 
  
const int MAX_CHAR = 26; 
  
void commonCharacters(string str[], int n) 
{ 
    // primary array for common characters  
    // we assume all characters are seen before. 
    bool prim[MAX_CHAR]; 
    memset(prim, true, sizeof(prim)); 
  
    // for each string 
    for (int i = 0; i < n; i++) { 
  
        // secondary array for common characters 
        // Initially marked false 
        bool sec[MAX_CHAR] = { false }; 
  
        // for every character of ith string 
        for (int j = 0; str[i][j]; j++) { 
  
            // if character is present in all  
            // strings before, mark it. 
            if (prim[str[i][j] - 'a']) 
                sec[str[i][j] - 'a'] = true;  
        } 
  
        // copy whole secondary array into primary 
        memcpy(prim, sec, MAX_CHAR); 
    } 
  
    // displaying common characters 
    for (int i = 0; i < 26; i++) 
        if (prim[i]) 
            printf("%c ", i + 'a'); 
} 

/* Driver program to test removeDups */
int main() 
{ 
	 int t;
    cin >> t;
	int is=INT16_MAX,index;
    while (t--)
    {	int n;
		cin>>n;
		string temp[n];
		for (int i=0;i<n;i++){
		cin>>temp[i];
		//temp[i]=removeDuplicatesFromString(temp[i]);
		} 
		commonCharacters(temp,n) ;
		return 0; 
} 
}
    
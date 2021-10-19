/*

There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.

*/

#include <iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int r=0, g=0, b=0;
    
    for(int i=1; i<n; i++)
    {
 	    if(s[i-1] == s[i])
 	    {
 	        if(s[i] == 'R')
 	        {
 	            ++r;
 	        }
 	        else if(s[i] == 'G')
 	        {
 		        ++g;
 	        }
      
 	  	    else if(s[i] == 'B')
 	        {
 	            ++b;
            }
        }
    }
    
    cout << r+g+b << endl;
  	
  	return 0;
}

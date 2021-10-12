/*

Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    string a, b;
    cin >> a >> b;
    
    for(int i=0; i<a.length(); i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
	        a[i] += 32;
			
		if(b[i] >= 'A' && b[i] <= 'Z')
		    b[i] += 32;
    }
    
		if(a > b)
		{ 
		    cout << "1" << endl;
		    return 0;
		}
		
		else if(a < b)
	    { 
	        cout << "-1" << endl;
	        return 0;
	    }
	    
	    else if(a == b)
	    {
	        cout << "0" << endl;
	    }
    
}
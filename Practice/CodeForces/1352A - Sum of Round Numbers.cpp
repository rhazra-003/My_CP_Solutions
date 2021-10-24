/*

A positive (strictly greater than zero) integer is called round if it is of the form d00...0. In other words, a positive integer is round if all its digits except the leftmost (most significant) are equal to zero. In particular, all numbers from 1 to 9 (inclusive) are round.

For example, the following numbers are round: 4000, 1, 9, 800, 90. The following numbers are not round: 110, 707, 222, 1001.

You are given a positive integer n (1≤n≤104). Represent the number n as a sum of round numbers using the minimum number of summands (addends). In other words, you need to represent the given number n as a sum of the least number of terms, each of which is a round number.

*/

#include <iostream>
#include<vector>
#include<cmath>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--)
    {
	    int n;
	    cin >> n;
	
	vector<int> vect;
	
	    int j=0;
	    while(n>0)
	    {
		    if(n%10)
		    {
			    int ans=pow(10,j);
			    ans*=(n%10);
		    
		        vect.push_back(ans);
		    }
		
		    n/=10;
		    ++j;
	    }
	
        int len=vect.size();
    	
        cout << len << endl;
    	
        for(int i=0;i<len;i++)
        {
            cout << vect[i] << " ";
        }
    	
        cout << endl;

    }

	return 0;
}

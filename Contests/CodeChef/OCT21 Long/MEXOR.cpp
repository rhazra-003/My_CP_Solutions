/*

The MEX (minimum excluded) of an array is the smallest non-negative integer that does not belong to the array. For instance:

The MEX of [2,2,1] is 0, because 0 does not belong to the array.
The MEX of [3,1,0,1] is 2, because 0 and 1 belong to the array, but 2 does not.
The MEX of [0,3,1,2] is 4 because 0,1,2 and 3 belong to the array, but 4 does not.
Find the maximum possible MEX of an array of non-negative integers such that the bitwise OR of the elements in the array does not exceed X.

*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x, cnt = 1;
	    cin >> x;
	    
	    if(x == 0)
	        cout << 1 << endl;
	    else if(x == 1 || x == 2)
	        cout << 2 << endl;
	    else{
	        while(cnt*2 <= x){
	            cnt*=2;
	        }
	        if(cnt == x)
	            cout << x << endl;
	        else if(x == (2*cnt - 1))
	            cout << x+1 << endl;
	        else
	            cout << cnt << endl;
	    }
	    
	}
	return 0;
}
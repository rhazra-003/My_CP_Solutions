/*
You are given a positive integer NN. You have to print exactly N+1N+1 positive integers satisfying the following conditions:

Exactly one value should appear twice, all the remaining values should appear only once.
Sum of all these values should be equal to 2N2N.
You have to print the values in non-decreasing order. If there are multiple solutions, you can print any of them.

*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    long long int sum=0, sumall=pow(2, n);
	    if(n==1)
	    {
	        cout << 1 << " " << 1 << endl;
	    }
	    else
	    {
	        for(int i=1; i<=n-1; i++)
	        {
	            cout << i << " ";
	            sum+=i;
	            if(i==n-1)
	            {
	                cout << i << " ";
	                sum+=i;
	            }
	        }
	        cout << (sumall - sum) << endl;
	    }
	    
	    
	}
	return 0;
}
/*

Alice and Bob are two friends. Initially, the skill levels of them are zero. They work on alternative days, i.e one of Alice and Bob works on the odd-numbered days(1,3,5,…)(1,3,5,…) and the other works on the even-numbered days (2,4,6,…)(2,4,6,…). The skill levels of Alice and Bob increase by A,BA,B respectively on the days they work.

Determine if it is possible that the skill levels of Alice and Bob become exactly P,QP,Q respectively on some day.

*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long a, b, p, q;
	    cin >> a >> b >> p >> q;
	    
	    if(p%a == 0 && q%b == 0)
	    {
	        long long x = p / a, y = q / b;
	        
	        if((x-y) == 1 || (y-x) == 1 || (x-y) == 0 || (y-x) == 0)
	        {
	            cout << "YES" << endl;
	        }
	        else
	        {
	            cout << "NO" << endl;
	        }
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
// https://www.codechef.com/problems/DRUNKALK

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int k;
	    cin >> k;
	    
	    if(k != 0)
	    {
	        if(k%2 == 0)
	        {
	            cout << k << endl;
	        }
	        else
	        {
	            cout << k+2 << endl;
	        }
	    }
	    else
	    {
	        cout << 0 << endl;
	    }
	    
	}
	return 0;
}

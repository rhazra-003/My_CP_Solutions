/*

Chef has taken his first dose of vaccine D days ago. He may take the second dose no less than L days and no more than R days since his first dose.

Determine if Chef is too early, too late, or in the correct range for taking his second dose.

*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int d, l, r;
	    cin >> d >> l >> r;
	    
	    if (d>=l && d<=r)
	    {
	        cout << "Take second dose now" << endl;
	    }
	    else if (d<l)
	    {
	        cout << "Too Early" << endl;
	    }
	    else
	    {
	        cout << "Too Late" << endl;
	    }
	}
	return 0;
}

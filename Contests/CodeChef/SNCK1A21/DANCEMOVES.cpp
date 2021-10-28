/*

This year Chef is participating in a Dancing competition. The dance performance will be done on a linear stage marked with integral positions. Initially, Chef is present at position XX and Chef's dance partner is at position YY. Chef can perform two kinds of dance moves.

If Chef is currently at position kk, Chef can:

1. Moonwalk to position k+2, or
2. Slide to position k−1

Chef wants to find the minimum number of moves required to reach his partner. Can you help him find this number?

*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x, y, cnt=0;
	    cin >> x >> y;
	    
	    while(x != y)
	    {
	        if(x<y)
	        {
	            x = x+2;
	            cnt++;
	        }
	        if(x>y)
	        {
	            x = x-1;
	            cnt++;
	        }
	    }
	    
	    cout << cnt << endl;
	}
	return 0;
}
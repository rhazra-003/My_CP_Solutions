/*

Chef has A units of solid and B units of liquid. He combines them to create a mixture. What kind of mixture does Chef produce: a solution, a solid, or a liquid?

A mixture is called :

1) A solution if A>0 and B>0,

2) A solid if B=0, or

3) A liquid if A=0.

*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    
	    cin >> a;
	    cin >> b;
	    
	    if(a>0 && b>0)
	        cout << "Solution" << endl;
	    if(a==0)
	        cout << "Liquid" << endl;
	    if(b==0)
	        cout << "Solid" << endl;
	}
	return 0;
}
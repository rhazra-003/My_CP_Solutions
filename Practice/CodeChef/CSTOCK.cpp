// https://www.codechef.com/problems/CSTOCK

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    float s, a, b, c;
	    float f;
	    
	    cin >> s >> a >> b >> c;
	    
	    f = s*(1+c/100);
	    
	    if(f>=a && f<=b)
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}

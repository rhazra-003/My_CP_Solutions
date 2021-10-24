/*

Chef will have N guests in his house today. He wants to serve at least one dish to each of the N guests. Chef can make two types of dishes. He needs one fruit and one vegetable to make the first type of dish and one vegetable and one fish to make the second type of dish. Now Chef has A fruits, B vegetables, and C fishes in his house. Can he prepare at least N dishes in total?

*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n, a, b, c;
	    cin >> n >> a >> b >> c;
	    
	    if(b>=n)
	    {
	        if((a+c) >= n)
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

/*

Linear Kingdom has exactly one tram line. It has n stops, numbered from 1 to n in the order of tram's movement. At the i-th stop ai passengers exit the tram, while bi passengers enter it. The tram is empty before it arrives at the first stop. Also, when the tram arrives at the last stop, all passengers exit so that it becomes empty.

Your task is to calculate the tram's minimum capacity such that the number of people inside the tram at any time never exceeds this capacity. Note that at each stop all exiting passengers exit before any entering passenger enters the tram.

*/

#include <iostream>
#include<cmath>

using namespace std;

int main() {
	 int n;
	 cin >> n;
	 int capacity=0, stillnow=0;
	 
	 for(int i=0; i<n; i++)
	 {
		 int a, b;
		 cin >> a >> b;
		 
		 stillnow -= a;
		 stillnow += b;
		 
		 capacity = max(capacity, stillnow);
	 }
	 
	 cout << capacity << endl;

	return 0;
}

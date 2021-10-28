/*

A round-robin tournament is being held in Chefland among N teams numbered 1,2,...,N1,2,...,N. Every team play with all other teams exactlyexactly once. All games have only two possible results - win or loss. A win yields 22 points to the winning team while a loss yields no points. What is the maximum number of points a team finishing at the KthKth position can score?

Note:Note: If two teams have the same points then the team with the higher team number achieves the better rank.

*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k, ans;
	    cin >> n >> k;
	    
	    ans = (2*n-k-1)/2;
	    
	    cout << 2*ans << endl;
	}
	return 0;
}

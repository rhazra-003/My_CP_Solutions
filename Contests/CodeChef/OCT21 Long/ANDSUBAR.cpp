/*

You are given an integer N. Consider the sequence containing the integers 1,2,…,N in increasing order (each exactly once). Find the length of the longest subarray in this sequence such that the bitwise AND of all elements in the subarray is positive.

*/

#include <bits/stdc++.h>
using namespace std;

int setbits(int n){
    int cnt = 0;
    
    while(n>0){
        cnt++;
        n = n>>1;
    }
    return cnt;
}


int main() {
	int t;
	cin >> t;
	while(t--){
	    int N;
	    cin >> N;
	    
	    int n = setbits(N);
	    int ans1 = N - pow(2, n-1) + 1;
	    int ans2 = pow(2, n-1) - pow(2, n-2);
	    
	    cout << max(ans1, ans2) << endl;
	}
	return 0;
}
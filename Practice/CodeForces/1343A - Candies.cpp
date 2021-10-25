/*

Recently Vova found n candy wrappers. He remembers that he bought x candies during the first day, 2x candies during the second day, 4x candies during the third day, …, 2k−1x candies during the k-th day. But there is an issue: Vova remembers neither x nor k but he is sure that x and k are positive integers and k>1.

Vova will be satisfied if you tell him any positive integer x so there is an integer k>1 that x+2x+4x+⋯+2k−1x=n. It is guaranteed that at least one solution exists. Note that k>1.

You have to answer t independent test cases.

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		for (int pw = 2; pw < 30; ++pw)
		{
			int val = (1 << pw) - 1;
			if (n % val == 0)
			{
				cerr << val << endl;
				cout << n / val << endl;
				break;
			}
		}
	}
	
	return 0;
}

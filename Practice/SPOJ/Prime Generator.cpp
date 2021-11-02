// https://www.spoj.com/problems/PRIME1/

#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n)
{
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;
 
	if (n%2 == 0 || n%3 == 0)
		return false;
 
	for (int i=5; i*i<=n; i= i+6)
		if (n%i == 0 || n%(i+2) == 0)
			return false;
 
	return true;
}
 
int main()
{
 
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;
 
	int t;
	cin >> t;
 
	while (t--)
	{
		long int start, stop;
		cin >> start >> stop;
 
		for (long int i = start; i <= stop; i++)
		{
			if (isPrime(i))
			{
				cout << i << endl;
			}
		}
		cout << endl;
	}
 
	return 0 ;
}

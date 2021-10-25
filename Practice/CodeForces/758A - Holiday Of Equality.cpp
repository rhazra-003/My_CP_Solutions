/*

In Berland it is the holiday of equality. In honor of the holiday the king decided to equalize the welfare of all citizens in Berland by the expense of the state treasury.

Totally in Berland there are n citizens, the welfare of each of them is estimated as the integer in ai burles (burle is the currency in Berland).

You are the royal treasurer, which needs to count the minimum charges of the kingdom on the king's present. The king can only give money, he hasn't a power to take away them.

*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
 	int n;
	cin >> n;
	int arr[n];
	int maxi=0;
	long long answer=0;
	
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
		maxi = max(arr[i], maxi);
	}
	
	for(int i=0; i<n; i++)
	{
      answer += maxi-arr[i];
	}
		
	cout << answer << endl;
	
	return 0;
}

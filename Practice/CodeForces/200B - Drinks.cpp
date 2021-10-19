/*

Little Vasya loves orange juice very much. That's why any food and drink in his kitchen necessarily contains orange juice. There are n drinks in his fridge, the volume fraction of orange juice in the i-th drink equals pi percent.

One day Vasya decided to make himself an orange cocktail. He took equal proportions of each of the n drinks and mixed them. Then he wondered, how much orange juice the cocktail has.

Find the volume fraction of orange juice in the final drink.

*/

#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;

	long double res=0;

	for(int i=0; i<n; i++)
	{
	    long double p;
	    cin >> p;
	    res += p/100;
	}
	
	cout << res*100/n << endl;
	
	return 0;
}

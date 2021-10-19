/*

The translation from the Berland language into the Birland language is not an easy task. Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little: it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc. However, it's easy to make a mistake during the «translation». Vasya translated word s from Berlandish into Birlandish as t. Help him: find out if he translated the word correctly.

*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string s, l;
	
	cin >> s >> l;
	reverse(l.begin(), l.begin()+l.size());
	
	if(s==l)
	{
	    cout<<"YES";
	}
	
	else
	{
	    cout<<"NO";
	}
	
	return 0;
}

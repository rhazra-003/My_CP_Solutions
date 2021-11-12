// https://codeforces.com/problemset/problem/1560/A

#include<bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while (t--){
		int k;
    	cin >> k;
    
    	int n = 1;
    
    	while (k)
    	{
    		if (n % 3 != 0 && n % 10 != 3)
    		{
    		    --k;
    		}
    		
    		++n;
    	}
    
    	cout << n - 1 << '\n';
	}

	return 0;
}

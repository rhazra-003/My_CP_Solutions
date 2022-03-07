// https://codeforces.com/problemset/problem/1141/A

#include <iostream>

using namespace std;

int main() {
	int n, m, ans = -1;
    cin >> n >> m;
    
    if (m % n == 0) 
    {
        ans = 0;
    
        int d = m / n;
    
        while (d % 2 == 0)
        {
            d /= 2;
            
            ans++;
        }
        
        while (d % 3 == 0)
        {
            d /= 3;
            
            ans++;
        }
        
        if (d != 1)
        {
            ans = -1;
        }
    }
    
    cout << ans << endl;
	
	return 0;
}

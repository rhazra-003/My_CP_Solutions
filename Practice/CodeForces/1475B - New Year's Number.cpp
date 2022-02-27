// https://codeforces.com/contest/1475/problem/B

#include <iostream>

using namespace std;

int main()
{
    long long int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int p = n%2020;
        int q = n/2020;
        
        if(p <= q)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

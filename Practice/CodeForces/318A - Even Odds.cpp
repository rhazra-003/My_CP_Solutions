// https://codeforces.com/contest/318/problem/A

#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    
    if(n%2 == 0)
    {
        if(k <= n/2)
        {
            cout << 2*k-1 << endl;
        }
        else
        {
            cout << 2*k-n << endl; 
        }
    }
    
    else
    {
        if(k <= (n+1)/2)
        {
            cout << 2*k-1 << endl;
        }
        else
        {
            cout << 2*k-n-1 << endl;
        }
    }
    
    return 0;
}

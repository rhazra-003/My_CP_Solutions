// https://codeforces.com/contest/460/problem/A

#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
    
    int cnt = n;
    
    while(n >= m)
    {
        cnt += (n / m);
        n = ((n / m) + (n % m));
    }
    
    cout << cnt << endl;
    
    return 0;
}

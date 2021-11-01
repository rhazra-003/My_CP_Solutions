// https://codeforces.com/contest/750/problem/C

#include <bits/stdc++.h>

using namespace std;

const int INF = INT_MAX;

int main()
{
    long long n;
    cin >> n;
    
    int ci, di, delta = 0, hi = INF, lo = -INF;
    
    for(int i = 0; i < n; ++i) 
    {
        cin >> ci >> di;
        
        if(di == 1) 
        {
            lo = max(lo, 1900-delta);
        }
        
        else
        {
            hi = min(hi, 1899-delta);
        }
        
        delta += ci;
    }
    
    if(hi == INF) 
    {
        puts("Infinity");
    }
    
    else if(hi < lo) 
    {
        puts("Impossible");
    }
    
    else
    {
        cout<< hi+delta << endl;
    }
    
    return 0;
}

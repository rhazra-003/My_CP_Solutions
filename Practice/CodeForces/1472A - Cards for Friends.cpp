// https://codeforces.com/problemset/problem/1472/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long w, h, n, cnt=1;
        cin >> w >> h >> n;
        
        if(n == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        
        while(w % 2 == 0)
        {
            cnt *= 2;
            w = w / 2;
        }
        
        while(h % 2 == 0)
        {
            cnt *= 2;
            h = h / 2;
        }
        
        if( n <= cnt)
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

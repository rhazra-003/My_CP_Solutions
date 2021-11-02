// https://codeforces.com/contest/1374/problem/A

#include<bits/stdc++.h>

using namespace std;

void solve(){
    long long x, y, n;
    cin >> x >> y >> n;
    
    long long cnt = n / x;
    
    long long ans = x * cnt + y;
    
    if(ans>n)
    {
        ans -= x ;
    }
    
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >> t;
    
    for(int i=0; i<t; i++)
    {
        solve();
    }

    return 0 ;
}

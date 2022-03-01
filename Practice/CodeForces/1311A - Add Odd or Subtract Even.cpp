// https://codeforces.com/problemset/problem/1311/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--){
        int a, b, ans=0;
        cin >> a >> b;
        
        if(a == b)
        {
            cout << 0 << "\n";
            continue;
        }
        if(a>b)
        {
            ans++;
            
            if((a-b)%2 !=0)
            {
                ans++;
            }
        }
        else if(a < b)
        {
            ans++;
            
            if((b-a)%2 != 1)
            {
                ans++;
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}

// https://codeforces.com/problemset/problem/1294/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--){
        long long int a, b, c, n, arr[3], diff=0;
        cin >> arr[0] >> arr[1] >> arr[2] >> n;
        
        sort(arr, arr + 3);
        
        diff = arr[2] - arr[0];
        diff += arr[2] - arr[1];
 
        if(n >= diff)
        {
            n -= diff;
            
            if(n % 3 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else 
        {
            cout << "NO" << endl;
        }
            
    }
    
    return 0;
}

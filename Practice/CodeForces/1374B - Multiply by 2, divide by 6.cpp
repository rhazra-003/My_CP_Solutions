// https://codeforces.com/contest/1374/problem/B

#include <iostream>

using namespace std;

int main()
{
    long long int t, n;
    cin >> t;
    while(t--){
        int cnt=0;
        cin >> n;
        
        while(n%6 == 0)
        {
            n = n/6;
            cnt++;
        }
        
        while(n%3 == 0)
        {
            n = n/3;
            cnt = cnt+2;
        }
        
        if(n == 1)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    
    return 0;
}

// https://codeforces.com/contest/750/problem/A

#include <iostream>

using namespace std;

int main() {
    int n, k, sum=0, cnt=0;
    cin >> n >> k;
    
    if((240-k) >= 5*n*(n+1)/2)
    {
        cout << n << endl;
    }
    else
    {
        for (int i=1; i<=n; i++)
        {
            sum += 5 * i;

            if (sum > (240-k))
                break;

            cnt = cnt + 1;
        }
        
        cout << cnt << endl;
    }
    
    return 0;
}

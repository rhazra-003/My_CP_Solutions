// https://codeforces.com/contest/139/problem/A

#include <iostream>

using namespace std;

int main()
{
    int n, arr[7], ans=0;
    cin >> n;
    
    for (int i=0; i<7; i++) 
    {
        cin >> arr[i];
    }
    
    int t = arr[0];

    while (t<n)
    {
        ans++;
        ans %= 7;
        t += arr[ans];
    }

    cout << ans+1 << endl;
    
    return 0;
}

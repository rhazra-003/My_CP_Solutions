/*

Chef has N slippers, L of which are left slippers and the rest are right slippers. Slippers must always be sold in pairs, where each pair contains one left and one right slipper. If each pair of slippers cost X rupees, what is the maximum amount of rupees that Chef can get for these slippers?

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, x;
        cin >> n >> l >> x;
        
        int pairs = min(n - l, l);
        
        cout << pairs * x << endl;
    }
    
    return 0;
}

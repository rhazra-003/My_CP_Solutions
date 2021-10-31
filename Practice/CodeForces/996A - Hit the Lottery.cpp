/*

Allen has a LOT of money. He has nn dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 11, 55, 1010, 2020, 100100. What is the minimum number of bills Allen could receive after withdrawing his entire balance?

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans=0;
    int a[] = {100,20,10,5,1};
    cin >> n;
    
    for(int i=0; i<5; i++)
    {
        ans += n/a[i];
        n = n%a[i];
    }
    
    cout << ans << endl;
    return 0;
}

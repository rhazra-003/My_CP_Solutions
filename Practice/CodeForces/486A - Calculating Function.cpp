/*

For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

Your task is to calculate f(n) for a given integer n.

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    
    if(n%2==0)
    {
        cout << n/2 << endl;    
    }
    else
    {
        cout << -(n/2+1) << endl;
    }

    return 0;
}

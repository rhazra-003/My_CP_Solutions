// https://codeforces.com/problemset/problem/69/A

#include <iostream>

using namespace std;

int main()
{
    int t, x, y, z, X=0, Y=0, Z=0;
    cin >> t;

    while (t--)
    {
        cin >> x >> y >> z;
        X += x;
        Y += y;
        Z += z;
    }

    if (X == 0 && Y == 0 && Z == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

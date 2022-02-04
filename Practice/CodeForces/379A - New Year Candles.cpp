// https://codeforces.com/contest/379/problem/A

#include <iostream>

using namespace std;

int main()
{
    int a, b, d, m;
    cin >> a >> b;
    int flag = a;

    while(a >= b)
    {
        d = a / b;
        flag += d;
        m = a % b;
        a = d + m;
    }

    cout << flag << endl;
    
    return 0;
}

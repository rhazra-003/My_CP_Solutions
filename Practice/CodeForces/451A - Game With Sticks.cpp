// https://codeforces.com/problemset/problem/451/A

#include <iostream>

using namespace std;

int main() {
    int n, m, p=0;
    cin >> n >> m;
    
    if(n > m)
    {
        p = m;
    }
    else
    {
        p = n;
    }
    
    if(p % 2 == 0)
    {
        cout << "Malvika" << endl;
    }
    else
    {
        cout << "Akshat" << endl;
    }
    
    return 0;
}

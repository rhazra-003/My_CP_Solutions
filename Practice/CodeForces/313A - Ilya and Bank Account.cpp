// https://codeforces.com/contest/313/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    
    int a, b;
    
    if(n>=0)
    {
        cout << n << endl;
    }
    else
    {
        a = -n%10;
        b = -n%100;
        
        if(a*10 <= b)
        {
            cout << (n+b)/10 + a << endl;
        }
        else
        {
            cout << (n+a)/10 << endl;
        }
    }
    
    return 0;
}

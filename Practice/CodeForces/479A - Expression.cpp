// https://codeforces.com/problemset/problem/479/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, p=0, q=0, r=0, s=0, t=0, u=0;
    cin >> a >> b >> c;
    
    p = (a+b)*c;
    q = a*(b+c);
    r = a*b+c;
    s = a+b*c;
    t = a*b*c;
    u = a+b+c;
    
    int arr[6] = {p, q, r, s, t, u};
    
    cout << *max_element(arr, arr+6);
    
    return 0;
}

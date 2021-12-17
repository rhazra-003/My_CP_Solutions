// https://codeforces.com/problemset/problem/492/A

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, count=0, i=1, m=1;
    cin >> n;

    while(m <= n)
    {
        m = ((i*i) + i) / 2;

        if(m > n)
            break;

        n = n - m;

        count++;

        i++;
    }

    cout << count << endl;

    return 0;
}

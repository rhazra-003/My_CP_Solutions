// https://codeforces.com/contest/1475/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n & 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool flag = false;
            long long div = n;
            while(div > 2)
            {
                div /= 2;
                if(div & 1)
                {
                    if(n % div == 0)
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if(flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}

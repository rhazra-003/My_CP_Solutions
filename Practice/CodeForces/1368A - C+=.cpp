// https://codeforces.com/problemset/problem/1368/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long long int a, b, n, sum=0, cnt=0;
        cin >> a >> b >> n;

        while(sum <= n)
        {
            if(a > b)
            {
                b += a;
                sum = b;
                cnt++;
            }
            else
            {
                a += b;
                sum = a;
                cnt++;
            }
            
            if(sum > n)
            {
                break;
            }
        }
        
        cout << cnt << endl;
    }

        return 0;
}

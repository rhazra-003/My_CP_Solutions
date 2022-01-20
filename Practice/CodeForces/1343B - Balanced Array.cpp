// https://codeforces.com/contest/1343/problem/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a[1000000], n, sum1=0, sum2=0, d;
        
        cin >> n;

        if(n%4!=0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            
            for(int i=2; i<=n; i+=2)
            {
                cout << i << " ";
                sum1 += i;
            }
            for(int i=1; i<n-2; i+=2)
            {
                cout << i << " ";
                sum2 += i;
            }
            
            cout << sum1-sum2 << "\n";
        }
    }
    
    return 0;
}

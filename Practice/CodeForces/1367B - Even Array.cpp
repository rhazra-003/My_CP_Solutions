// https://codeforces.com/contest/1367/problem/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a[100], c = 0, flag = 0, odd = 0, even = 0;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        
        for(int i=0; i<n; i++)
        {
            if(i%2 != a[i]%2)
            {
                if(a[i]%2 == 1)
                {
                    odd++;
                }
                else 
                {
                    even++;
                }    
            }
        }
        if(odd != even)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << even << endl;
        }
    }
    
    return 0;
}

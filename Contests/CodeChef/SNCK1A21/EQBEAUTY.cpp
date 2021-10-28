/*

The beauty of an (non-empty) array of integers is defined as the difference between its largest and smallest element.

For example, the beauty of the array [2,3,4,4,6] is 6−2=4.

An array AA is said to be good if it is possible to partition the elements of A into two non-empty arrays B1 and B2 such that

B1 and B2 have the same beauty.

Each element of array AA should be in exactly one array: either in B1B1 or in B2.

For example, the array [6,2,4,4,4] is good because its elements can be partitioned into two arrays B1=[6,4,4] and B2=[2,4], where both B1 and B2 have the same beauty (6−4=4−2=26−4=4−2=2).

You are given an array AA of length NN. In one move you can:

Select an index i (1≤i≤N) and either increase Ai by 1 or decrease Ai by 1.

Find the minimum number of moves required to make the array A good.

*/

#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long t;
    cin>>t;
    
    while(t--)
    {
        long long n, k, ans1 = 0, ans2 = 0, d2, d1;
        long long m = INT_MAX;
 
        cin >> n;
 
        vector<long long> a(n);
        
        for(long long i=0; i<n; i++)
        {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
 
        long long l = 1, r = n - 2;
        
        if (n == 2)
        {
            cout << 0 << endl;
            continue;
        }
        else if (n == 3)
        {
            cout << min(a[1] - a[0], a[2] - a[1]) << endl;
            continue;
        }
        
        for(long long i=0; i<n-1; i++)
        {
            ans1 += abs(a[i] - a[(n - 1) / 2]);
        }
        
        for (long long i = 1; i < n; i++)
        {
            ans2 += abs(a[i] - a[1 + (n - 1) / 2]);
        }
        
        m = min(ans1, ans2);
 
        while (l < r)
        {
            d2 = a[n - 1] - a[l], d1 = a[r] - a[0];
            
            m = min(m, abs(d1 - d2));
            
            if (d1 < d2)
            {
                l++;
            }
            else
            {
                r--;
            }
                
        }
        
        cout << m << endl;
    }
    
    return 0;
}
// https://codeforces.com/problemset/problem/702/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
        long long int n;
        cin>>n;
        
        long long int arr[n], count=1, max=1;

        for(long long int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        for(long long int i=1; i<n; i++)
        {
            if(arr[i] > arr[i-1])
            {
                count++;
            }
            else
            {
                if(count>max)
                {
                    max=count;
                }
                
                count=1;
            }
        }

        if(count>max)
        {
            max=count;
        }

        cout << max;

        return 0;
}

// https://codeforces.com/contest/1512/problem/A

#include <iostream>

using namespace std;

int spyDect(int arr[], int n)
{
 
    if (n == 1)
    {
        return -1;
    }
    if (n == 2)
    {
        return 0;
    }
    if (arr[0] == arr[1] && arr[0] != arr[2])
    {
        return 2;
    }
    if (arr[0] == arr[2] && arr[0] != arr[1])
    {
        return 1;
    }
    if (arr[1] == arr[2] && arr[0] != arr[1])
    {
        return 0;
    }
    for (int i = 3; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            return i;
        } 
    }
    
    return -1;
}

int main()
{
    int t, n;
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        int arr [n+9];
        
        for(int j=0; j<n; j++)
        {
            cin >> arr[j];
        }
        
        cout << spyDect(arr, n)+1 << "\n";
    }
    return 0;
}

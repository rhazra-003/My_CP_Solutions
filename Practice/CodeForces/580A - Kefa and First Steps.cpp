// https://codeforces.com/problemset/problem/580/A

#include <iostream>
using namespace std;

int main()
{
    int n, p=1, cp=1;
    cin >> n;
    
    int profits[n];

    for(int i=0; i<n; i++)
    {
        cin >> profits[i];
        
        if (i>0)
            if(profits[i] >= profits[i-1])
            {
                p++;
                cp = max(cp, p);
            }
            else
                p = 1;
    }

    cout << cp << endl;
    
    return 0;
}

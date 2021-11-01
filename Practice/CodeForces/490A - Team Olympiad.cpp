// https://codeforces.com/contest/490/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, w=0;
    vector<int> v1, v2, v3;
    
    cin >> n;
    int arr[n];
    
    for(int i=1; i<=n; i++)
    {
        cin >> arr[i];
        
        if(arr[i] == 1)
        {
            v1.push_back(i);
        }
        else if(arr[i] == 2)
        {
            v2.push_back(i);
        }
        else
        {
            v3.push_back(i);
        }
    }
    
    w = min(min(v1.size(), v2.size()), v3.size());
    
    cout << w << endl;
    
    for (int i = 0; i < w; ++i) {
		cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
	}
    
    return 0;
}

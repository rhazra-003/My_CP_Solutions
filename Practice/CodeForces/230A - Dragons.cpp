// https://codeforces.com/contest/230/problem/A

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int s, n, a, b;
    vector <pair <int, int >> v;
    cin >> s >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    
    sort(v.begin(), v.end());
    
    for(int i=0; i<n; i++)
    {
        if(s <= v[i].first)
        {
            cout << "NO" << endl;
            return 0;
        }
        
        else
        {
            s += v[i].second;
        }
    }
    
    cout << "YES" << endl;

    return 0;
    
}

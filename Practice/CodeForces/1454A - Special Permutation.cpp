// https://codeforces.com/problemset/problem/1454/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--){
        int n;
        cin >> n;
        
        vector<int> v;
        
        for(int i=n; i>0; i--)
        {
            v.push_back(i);
        }
        
        for(int i=0; i<n; i++)
        {
            if(v[i] == i+1)
            {
                swap(v[i], v[i+1]);
            }
        }       
        
        for (auto it : v)
		{
		    cout << it << " ";
		}
		
		cout << endl;    
	}
    
    return 0;
}

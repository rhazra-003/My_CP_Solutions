// https://www.codechef.com/problems/CALPOWER

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t;
	
	while(t--){
	    string s;
	    cin >> s;
	    
	    sort(s.begin(),s.end());
	    
	    int ans=0;
	    
	    for(int i=0; i<s.length(); i++)
	    {
	        int val = (s[i]-'a'+1)*(i+1);
	        
	        ans += val;
	    }
	    
	    cout << ans << endl;
	
	}
}

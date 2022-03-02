// https://codeforces.com/problemset/problem/1374/C

#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        
        int ans = 0, open = 0, close = 0;

        for(int i=0; i<n; i++)
        {
            if(s[i] == '(' && s[i+1] == ')')
            {
                i++;
                continue;
            }
            if(s[i] == '(')
            {
                open++;
            }
            if(s[i] == ')')
            {
                close++;
                
                if(open < close)
                {
                    ans++;
                
                    close--;
                }
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}

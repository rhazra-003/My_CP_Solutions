// https://codeforces.com/problemset/problem/1097/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
        string s, p;
        cin >> s;
        
        for(int i=0; i<5; i++)
        {
            cin >> p;
        
            if(p[0]==s[0] || p[1]==s[1])
            {
                cout << "YES" << endl;
                
                return 0;
            }
        }
        
        cout << "NO" << endl;

        return 0;
}

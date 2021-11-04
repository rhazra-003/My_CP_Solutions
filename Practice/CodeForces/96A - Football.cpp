// https://codeforces.com/contest/96/problem/A

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int sequence=1;
    
    for (int i=1; i<s.length(); ++i)
    {
        if (s[i] == s[i-1])
        {
            sequence += 1;
            
            if (sequence == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        
        else
        {
            sequence = 1;
        }
    }

    cout << "NO" << endl;
    
    return 0;
}

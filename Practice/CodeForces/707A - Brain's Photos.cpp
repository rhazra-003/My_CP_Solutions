// https://codeforces.com/contest/707/problem/A

#include <iostream>

using namespace std;

int main(){
    int n, m, cnt=0;
    char c;
    cin >> n >> m;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> c;
            
            if (c == 'C' || c == 'M' || c == 'Y')
            {
                cnt = 1;
                break;
            }
        }
        
        if(cnt == 1)
        {
            break;
        }
    }
    
    if(cnt == 1) 
    {
        cout << "#Color" << "\n";
    }
    else
    {
        cout << "#Black&White" << "\n";
    }
    
    return 0;
}

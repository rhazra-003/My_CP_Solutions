// https://codeforces.com/problemset/problem/1535/A

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if(a>b)
        {
            if(a>c && a>d)
            {
                if(b>c && b>d)
                {
                    cout << "NO" << endl; 
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                if(a<c && a<d)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
        else
        {
            if(b>c && b>d)
            {
                if(a>c && a>d)
                {
                    cout << "NO" << endl; 
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                if(b<c && b<d)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
    }

    return 0;
    
}

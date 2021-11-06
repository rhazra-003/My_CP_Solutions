// https://codeforces.com/problemset/problem/1360/A

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        
        if(a > b){
            swap(a,b);
        }
        cout << max(a*2, b)*max(a*2, b) << endl;
            
    }
    return 0;
}

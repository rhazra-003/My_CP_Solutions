// https://codeforces.com/problemset/problem/58/A

#include <iostream>

using namespace std;

int main() {
    string a, hello = "hello";
    int j=0, pas=0;
    cin >> a;
    
    for (int i=0; i<a.size(); i++)
    {
        if(a[i] == hello[j])
        {
            j++;
            pas++;
            
            if (pas == 5)
            {
                break;
            }
        }
    }
    
    if (pas == 5) 
    {
        cout << "YES";
    } 
    else
    {
        cout << "NO";
    }
    
    return 0;
}

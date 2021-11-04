// https://codeforces.com/contest/703/problem/A

#include <iostream>

using namespace std;

int main ()
{
    int n, m=0, c=0, m1=0, c1=0;
    cin >> n;
    
    while(n--){
        cin >> m >> c;
        
        if(m>c)
        {
            m1++;
        }
        else if(c>m)
        {
            c1++;
        }
    }
    
    if (m1 > c1) 
    {
        cout << "Mishka" << endl;
    } 
    else if (c1 > m1) 
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }
    
    return 0;
}

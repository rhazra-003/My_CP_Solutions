/*

When preparing a tournament, Codeforces coordinators try treir best to make the first problem as easy as possible. This time the coordinator had chosen some problem and asked n people about their opinions. Each person answered whether this problem is easy or hard.

If at least one of these n people has answered that the problem is hard, the coordinator decides to change the problem. For the given responses, check if the problem is easy enough.

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    cin >> n;

    while(n>0)
    {
        cin >> i;
        
        if (i == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
        
        n--;
    }    
    
    cout << "EASY" << endl; 

    return 0;
}

/*

A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on (in other words, he has to pay i·k dollars for the i-th banana).

He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    
    if(w*(w+1)/2*k - n > 0)
    {
        cout << w*(w+1)/2*k - n << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    
    return 0;
}

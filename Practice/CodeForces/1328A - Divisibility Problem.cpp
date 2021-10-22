/*

You are given two positive integers a and b. In one move you can increase a by 1 (replace a with a+1). Your task is to find the minimum number of moves you need to do in order to make a divisible by b. It is possible, that you have to make 0 moves, as a is already divisible by b. You have to answer t independent test cases.

*/

#include <iostream>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    
    while(t--){
        long long a, b;
        cin >> a >> b;

        if(a%b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (b - (a%b)) << endl;
        }
    }
}

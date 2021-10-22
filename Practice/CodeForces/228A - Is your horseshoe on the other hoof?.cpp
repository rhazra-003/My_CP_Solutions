/*

Valera the Horse is going to the party with friends. He has been following the fashion trends for a while, and he knows that it is very popular to wear all horseshoes of different color. Valera has got four horseshoes left from the last year, but maybe some of them have the same color. In this case he needs to go to the store and buy some few more horseshoes, not to lose face in front of his stylish comrades.

Fortunately, the store sells horseshoes of all colors under the sun and Valera has enough money to buy any four of them. However, in order to save the money, he would like to spend as little money as possible, so you need to help Valera and determine what is the minimum number of horseshoes he needs to buy to wear four horseshoes of different colors to a party.

*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    
    set<int> r;
    
    r.insert(s1);
    r.insert(s2);
    r.insert(s3);
    r.insert(s4);

    if(r.size() == 4)
    {
        cout << 0 << endl;
    }
    else if(r.size() == 3)
    {
        cout << 1 << endl;
    }
    else if(r.size() == 2)
    {
        cout << 2 << endl;
    }
    else 
    {
        cout << 3 << endl;
    }
    
    return 0;
}

/*

Polycarp has guessed three positive integers a, b and c. He keeps these numbers in secret, but he writes down four numbers on a board in arbitrary order — their pairwise sums (three numbers) and sum of all three numbers (one number). So, there are four numbers on a board in random order: a+b, a+c, b+c and a+b+c.

You have to guess three numbers a, b and c using given numbers. Print three guessed integers in any order.

Pay attention that some given numbers a, b and c can be equal (it is also possible that a=b=c).

*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    long long x1, x2, x3, x4;
    
    cin >> x1 >> x2 >> x3 >> x4;
    
    vector<int> v;
    
    v.push_back(x1);
    v.push_back(x2);
    v.push_back(x3);
    v.push_back(x4);
    
    sort(v.begin(),v.end());
    
    cout << v[3]-v[0] << " " << v[1]-(v[3]-v[0]) << " " << v[2]-(v[3]-v[0]) << endl;

	return 0;
}

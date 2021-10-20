/*

Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.

*/

#include <iostream>
#include<cmath>

using namespace std;

int main() {
	long long n;
    cin >> n;
    int cnt = 0;
    
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            cnt += 1;
        }
        n /= 10;
    }
	 
	 if(cnt==4 || cnt==7)
	 {
	     cout << "YES" << endl;
	 }
	 else
	 {
	     cout << "NO" << endl;
	 }

	return 0;
}

/*

Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given n numbers finds one that is different in evenness.

*/

#include <iostream>
using namespace std;

int main()
{
    int n, x, even(0), lastodd(0), lasteven(0);
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            even += 1;
            lasteven = i;
        }
        else
        {
            even -= 1;
            lastodd = i;
        }
    }

    cout << (even > 0 ? lastodd : lasteven) << endl;
    return 0;
}

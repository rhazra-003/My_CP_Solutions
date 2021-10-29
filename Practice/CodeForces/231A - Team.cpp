/*

One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests. Participants are usually offered several problems during programming contests. Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution. Otherwise, the friends won't write the problem's solution.

This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution. Help the friends find the number of problems for which they will write a solution.

*/

#include <iostream>

using namespace std;

int main()
{
    int n, P, V, T, num=0;
    cin >> n;
    
    while (n--)
    {
        cin >> P >> V >> T;
        if (P + V + T >= 2)
        {
            num += 1;
        }
    }
    
    cout << num << endl;
    
    return 0;
}

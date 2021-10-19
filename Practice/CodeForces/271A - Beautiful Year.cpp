/*

It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

*/

#include <iostream>

using namespace std;

int main()
{
    int y;
    cin >> y;
    
    while (true)
    {
        y += 1;
    
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;
    
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    
    cout << y << endl;
    
    return 0;
}

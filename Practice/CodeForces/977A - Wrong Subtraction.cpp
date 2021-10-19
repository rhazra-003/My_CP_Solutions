/*

Little girl Tanya is learning how to decrease a number by one, but she does it wrong with a number consisting of two or more digits. Tanya subtracts one from a number by the following algorithm:

if the last digit of the number is non-zero, she decreases the number by one;
if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).
You are given an integer number n. Tanya will subtract one from it k times. Your task is to print the result after all k subtractions.

It is guaranteed that the result will be positive integer number.

*/

#include <iostream>

using namespace std;

int main() {

    int n=0, a=0, r, i;
    cin >> n >> a;
    
    for(i=1; i<=a; i++)
    {
        r=n%10;
        
        if(r==0)
        {
            n/=10;
        }
        
        else
        {
            n-=1;            
        }
    }
    
    cout << n << endl;

    return 0;
}

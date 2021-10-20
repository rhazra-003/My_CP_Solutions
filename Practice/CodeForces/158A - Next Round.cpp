/*

"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.

*/

#include <iostream>

using namespace std;

int main() {
    int n, k, a, b = 0, arr[50];
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        arr[i] = a;
    }
    
    for (int j = 1; j <= n; j++)
    {
        if (arr[j] >= arr[k] && arr[j] > 0)
        {
            b++;
        }
    }
    
    cout << b << endl;;
}

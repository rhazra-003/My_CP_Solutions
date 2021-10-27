/*

A penguin Rocher has n sticks. He has exactly one stick with length i for all 1≤i≤n.

He can connect some sticks. If he connects two sticks that have lengths a and b, he gets one stick with length a+b. Two sticks, that were used in the operation disappear from his set and the new connected stick appears in his set and can be used for the next connections.

He wants to create the maximum number of sticks that have the same length. It is not necessary to make all sticks have the same length, some sticks can have the other length. How many sticks with the equal length he can create?

*/

#include<bits/stdc++.h>

using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        cout << (a/2) + (a%2) << endl;
    }
}

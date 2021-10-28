/*

There is a game called "I Wanna Be the Guy", consisting of n levels. Little X and his friend Little Y are addicted to the game. Each of them wants to pass the whole game.

Little X can pass only p levels of the game. And Little Y can pass only q levels of the game. You are given the indices of levels Little X can pass and the indices of levels Little Y can pass. Will Little X and Little Y pass the whole game, if they cooperate each other?

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[250];
    int n , p , q;
    cin >> n >> p;
    int count = 0;

    for(int i =  0 ; i < p ; i++)
    {
        cin >> array[i];
    }
    
    cin >> q;
    
    for(int i = p ; i < p + q ; i++)
    {
        cin >> array[i];
    }

    sort(array , array+(p+q));

    for(int i = 0 ; i < p+q ; i++)
    {
        if(array[i] != array[i+1])
        {
            count++;
        }
    }

    if(n == (count))
    {
        cout << "I become the guy." <<endl;
    }
    
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}

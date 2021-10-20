/*

Anton likes to play chess, and so does his friend Danik.

Once they have played n games in a row. For each game it's known who was the winner — Anton or Danik. None of the games ended with a tie.

Now Anton wonders, who won more games, he or Danik? Help him determine this.

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a=0, d=0;
    cin >> n;
    char s;

    for (int i=0; i<n; i++)
    {
        cin >> s;
        
        if(s == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    
    if (a>d)
    {
        cout << "Anton" << endl;
    }
    else if (d>a)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    
    return 0;
}

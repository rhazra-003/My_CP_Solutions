/*

A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once. Pangrams are often used to demonstrate fonts in printing or test the output devices.

You are given a string consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in uppercase or lowercase.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<bool> alphabets(28, 0);
    
    for (int i=0; i<n; ++i)
    {
    	alphabets[tolower(s[i])-'a'] = 1;
    }
    
    for (int i=0; i<26; ++i)
    {
    	if(!alphabets[i])
    	{
    		cout << "NO" << endl;
    		return 0;
    	}

    }
    
    cout << "YES" << endl;
    return 0;
}

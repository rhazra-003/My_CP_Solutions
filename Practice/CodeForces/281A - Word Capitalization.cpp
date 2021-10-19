/*

Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

*/

#include <iostream>
using namespace std;

int main() {    
    string s;
    cin >> s;
    
    if(s[0]>=97 && s[0]<=122)
    {
        s[0] = s[0]-32;
    }
    
    cout << s << endl;
    return 0;
}

/*

The Professor is facing the North. Tokyo is in trouble, and she is facing the South. Professor being her guardian angel wants to help her.

So, The Professor will follow some instructions, given as a string S of length N, and will turn either left or right according to these instructions. He can save Tokyo only if after following a substring of instructions he will face in the same direction that Tokyo is facing.

Will the Professor be able to save Tokyo?

*/

#include <iostream>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
	cin >> s;
	
	int flag=0;
	
	for(int i=1; i<s.size(); i++)
	{
	    if(s[i] == 'L' && s[i-1] == 'L')
        {
            flag=1;
	    }
	    if(s[i] == 'R' && s[i-1] == 'R')
	    {
	        flag=1;
	    }
	}     
	    
	if(flag)
	{
        cout << "YES" <<endl;
    }
	else
	{
        cout << "NO" << endl;
	}
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
}	
/*

Given the schedule of Chef for 30 days (A binary string of length 30 where '0' denotes that Chef was on leave and '1' denotes Chef was working on that day). Chef gets X− Rs for every day he worked. As working continuously for a long time is hectic so Company introduced the following policy to give a bonus to its employees.

The company will check the longest streak for which an employee has worked and will award Y− Rs for every day of that streak as a bonus. Calculate the salary received by Chef (including the bonus).

Note: Rs represents the currency of Chefland, and if there are two or more longest streaks of the same length, only one is counted for the bonus.

*/

#include <bits/stdc++.h>
using namespace std;
 
int streax(string s) {
    int maxm=0;
    int i=0;
    
    while(i<s.size())
    {
        int conOnes=0;
        
        while(i<s.size() && s[i]==1)
        {
            conOnes++;
            i++;
        }
        
        maxm = max(maxm,conOnes);
        i++;
    }
    
    return maxm; 
}
 
void solve(){
    int x, y;
    cin >> x >> y;
    string s;
    cin >> s;
    int ones=0, res=0;
    int max = INT_MIN;
  
    for(int i=0; i<s.size(); ++i)
    {
        if(s[i]=='1')
        {
            ones++;
        }
    }
 
    for(int i=0; i<s.size(); ++i)
    {
        int j=i+1, cnt=1;
      
        while(s[i]=='1' && s[j]=='1')
        {
            i++;
            j++;
            cnt++;
        }
        
        if(cnt>max)
        {
            max = cnt;
        }
 
    }
 
    res = ones*x + (max*y);
 
    cout << res << endl;
 
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    
    int tc = 0; 
    
    while(t--)
    {
      solve();
    }   
    return 0;
}
/*

The police department of your city has just started its journey. Initially, they don’t have any manpower. So, they started hiring new recruits in groups.

Meanwhile, crimes keeps occurring within the city. One member of the police force can investigate only one crime during his/her lifetime.

If there is no police officer free (isn't busy with crime) during the occurrence of a crime, it will go untreated.

Given the chronological order of crime occurrences and recruit hirings, find the number of crimes which will go untreated.

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, temp, prev = 0, cnt = 0, ans = 0;
    cin >> n;
    
    while(n--){
        cin >> temp;
        cnt += temp;
        
        if(cnt < prev)
        {
            ans++;
            prev = cnt;
        }
    }
    
    cout << ans << "\n";
    
    return 0;
}

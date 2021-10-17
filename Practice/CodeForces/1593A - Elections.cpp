/*

The elections in which three candidates participated have recently ended. The first candidate received a votes, the second one received b votes, the third one received c votes. For each candidate, solve the following problem: how many votes should be added to this candidate so that he wins the election (i.e. the number of votes for this candidate was strictly greater than the number of votes for any other candidate)?

Please note that for each candidate it is necessary to solve this problem independently, i.e. the added votes for any candidate do not affect the calculations when getting the answer for the other two candidates.

*/

#include <iostream>
using namespace std;

int main() {    
    int t;
    cin >> t;
    while(t--)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        
        if(n1==n2 && n2==n3)
        {
            cout << "1" << " " << "1" << " " << "1" << endl;
        }
        
        else if(n1==n2 && n1>n3)
        {
            cout << "1" << " " << "1" << " " << n1-n3+1 << endl;
        }
        
        else if(n1==n3 && n1>n2)
        {
            cout << "1" << " " << n1-n2+1 << " " << "1" << endl;
        }
        
        else if(n2==n3 && n2>n1)
        {
            cout << n2-n1+1 << " " << "1" << " " << "1" << endl;
        }
        
        else
        {
            if(n1>n2 && n1>n3)
                cout << "0" << " " << n1-n2+1 << " " << n1-n3+1 << endl;
        
            if(n2>n1 && n2>n3)
                cout << n2-n1+1 << " " << "0" << " " << n2-n3+1 << endl;
            
            if(n3>n1 && n3>n2)
                cout << n3-n1+1 << " " << n3-n2+1 << " " << "0" << endl;
        }
    }
    
    return 0;
}

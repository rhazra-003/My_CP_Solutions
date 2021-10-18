/*

A 5 match test series between India and England has just concluded.

Every match could have ended either as a win for India, a win for England, or a draw. You know the result of all the matches. Determine who won the series or if it ended in a draw.

A team is said to have won the series if it wins strictly more test matches than the other team.

*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    int ind = 0, eng = 0;
	    
	    for(int i=0; i<5; i++){
	        cin >> n;
	        
	        if(n == 1)
	        {
	            ind++;
	        }
	        
	        else if(n == 2)
	        {
	            eng++;
	        }
	    }
	    
	    if(ind > eng)
	    {
	        cout << "INDIA" <<endl;
	    }
	    
	    else if(eng > ind)
	    {
	        cout << "ENGLAND" <<endl;
	    }
	    
	    else
	    {
	        cout << "DRAW" <<endl;
	    }
	}
	
	return 0;
}
/*

Chef has an exam which will start exactly M minutes from now. However, instead of preparing for his exam, Chef started watching Season-1 of Superchef. Season-1 has N episodes, and the duration of each episode is K minutes.

Will Chef be able to finish watching Season-1 strictly before the exam starts?

Note: Please read the explanations of the sample test cases carefully.

*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int m, n, k;
	    cin >> m >> n >> k;
	    
	    if(m > n*k)
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	
	}
	return 0;
}

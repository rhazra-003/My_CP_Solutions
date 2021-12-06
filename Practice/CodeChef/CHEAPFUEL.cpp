// https://www.codechef.com/NOV21B/problems/CHEAPFUEL

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int X, Y, A, B, K, M, N;
	    cin >> X >> Y >> A >> B >> K;
	    
	    M = X + K*A;
	    N = Y + K*B;
	    
	    if(M<N)
	    {
	        cout << "PETROL" << endl;
	    }
	    else if(N<M)
	    {
	        cout << "DIESEL" << endl;
	    }
	    else
	    {
	        cout << "SAME PRICE" << endl;
	    }
	}
	return 0;
}

/*

George has recently entered the BSUCP (Berland State University for Cool Programmers). George has a friend Alex who has also entered the university. Now they are moving into a dormitory.

George and Alex want to live in the same room. The dormitory has n rooms in total. At the moment the i-th room has pi people living in it and the room can accommodate qi people in total (pi ≤ qi). Your task is to count how many rooms has free place for both George and Alex.

*/

#include<iostream>

using namespace std;

int main() {
	int n, r=0;
	cin >> n;
	
	for (int i=0; i<n; i++)
	{
	    int p, q;
	    cin >> p >> q;
	    
	    if((q-1)>p)
	    {
	        r++;
	    }
	}
	
	cout << r << endl;

	return 0;
}

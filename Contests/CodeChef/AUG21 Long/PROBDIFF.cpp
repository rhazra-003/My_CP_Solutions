/*

You have prepared four problems. The difficulty levels of the problems are A1,A2,A3,A4 respectively. A problem set comprises at least two problems and no two problems in a problem set should have the same difficulty level. A problem can belong to at most one problem set. Find the maximum number of problem sets you can create using the four problems.

*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;

	while(t--)
	{
	     int n=4;
	     int a[n];

	     for (int i = 0; i < n; i++)
	     {
	         cin>>a[i];
	     }
	     
	     sort(a,a+n);
	     
	     if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3])
	        cout << "0" << endl;
	     
	     else if(a[0]!=a[1] && a[1]!=a[2] && a[2]!=a[3])
	        cout << "2" << endl;
	     
	     else if(a[0]==a[1] && a[1]==a[2])
	        cout << "1" << endl;
	     
	     else if(a[1]==a[2] && a[2]==a[3])
	        cout << "1" << endl;
	     
	     else
	        cout << "2" << endl;
	}
	
	return 0;
}
/*

There are N people in the vaccination queue, Chef is standing on the Pth position from the front of the queue. It takes X minutes to vaccinate a child and Y minutes to vaccinate an elderly person. Assume Chef is an elderly person.

You are given a binary array A1,A2,…,AN of length N, where Ai=1 denotes there is an elderly person standing on the ith position of the queue, Ai=0 denotes there is a child standing on the ith position of the queue. You are also given the three integers P,X,Y. Find the number of minutes after which Chef's vaccination will be completed.

*/

#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
	    int n, p, x, y, s=0, c=0;
	    cin >> n >> p >> x >> y;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }     
	   
	   for(int i=0; i<p; i++)
	   {
	       if(a[i]==0)
	       {
	            c=c+x;
	           
	       }
	       
	       else
	       {
	           s=s+y;
	       }
	   }
	   
	   cout << c+s << endl;
	   
	}
	
	return 0;
}

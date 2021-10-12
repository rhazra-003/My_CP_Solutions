/*

Increasing COVID cases have created panic amongst the people of Chefland, so the government is starting to push for production of a vaccine. It has to report to the media about the exact date when vaccines will be available.

There are two companies which are producing vaccines for COVID. Company A starts producing vaccines on day D1 and it can produce V1 vaccines per day. Company B starts producing vaccines on day D2 and it can produce V2 vaccines per day. Currently, we are on day 1.

We need a total of P vaccines. How many days are required to produce enough vaccines? Formally, find the smallest integer d such that we have enough vaccines at the end of the day d.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int d[2], v[2], p;
	cin>>d[0]>>v[0]>>d[1]>>v[1]>>p;

	if(d[0] == d[1]) {
	    int s = d[0]-1;
	    int sv = v[0] + v[1];
	    s += ceil((double)p / sv);
	    cout<<s<<endl;
	}
    
    else {
	    int l = (d[0] < d[1]) ? 0 : 1;
	    int m = 1 - l;
	    int s = d[l]-1;
	    int temp = (d[m] - d[l]) * v[l];
	    if(temp == p) {
	        s = d[m] - 1;
	        cout<<s<<endl;
	    }
        
        else if(temp > p) {
	        s += ceil((double)p / v[l]);
	        cout<<s<<endl;
	    }
        
        else {
	        s += (int)(temp / v[l]);
	        int sv = v[0] + v[1];
	        p -= temp;
	        s += ceil((double)p / sv);
	        cout<<s<<endl;
	    }
	}
	return 0;
}
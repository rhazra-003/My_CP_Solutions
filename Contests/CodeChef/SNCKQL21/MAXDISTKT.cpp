/*

Given an array B of length N, find an array A of length N where 0≤Ai≤109 such that array C where Ci=AimodBi, ∀i∈{1,2,...,N} has maximum number of distinct integers.

In case of multiple answers, print any.

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    return a.second < b.second;
}

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    ll n, x;
	    cin >> n;
	    
	    vector<pair<ll, ll>> arr;
	    
	    for(int i=0; i<n; i++)
	    {
	        cin >> x;
	        arr.push_back(make_pair(x, i));
	    }
	    
	    ll k = 0;
	    sort(arr.begin(), arr.end());
	    
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i].first > k)
	        {
	            arr[i].first = k;
	            k++;
	        }
	        else if(arr[i].first == k)
	        {
	            arr[i].first = k;
	        }
	    }
	    
	    sort(arr.begin(), arr.end(), cmp);
	    
        for(int i=0; i<n; i++)
        {
            cout << arr[i].first << " ";
        }
        cout << "\n";

	}

}
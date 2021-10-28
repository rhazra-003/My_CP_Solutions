/*

You are given two positive integers XX and KK.

You have to output the minimum and maximum value of LCM(i,j)LCM(i,j) where X≤i<j≤X⋅KX≤i<j≤X⋅K.

We define LCM(i,j)LCM(i,j) for two positive integers ii and jj as the minimum positive integer yy such that both ii and jj divide yy without remainder.

*/

#include "bits/stdc++.h" 
using namespace std; 

#define int long long 
#define endl '\n' 
#define M 1000000007  

void solve(){ 

int x,k; 

cin>>x>>k; 

int min,max; 

if(x*2<=x*k){ 

    min=x*2; 

 

} 

 

else if(x%2!=0){ 

    min=x*(x+1); 

} 

else{ 

    min=x*(x+2); 

} 

max=(x*k*(x*k-1)); 

cout<<min<<" "<<max<<endl; 

 

 

} 

 

signed main(){ 

    ios_base::sync_with_stdio(false); 

    cin.tie(0);cout.tie(0); 

    int t=1; 

    cin>>t; 

    while(t--) solve(); 

    return 0; 

}
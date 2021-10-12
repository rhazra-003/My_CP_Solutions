/*

You are given a positive integer N. Consider the sequence S=(1,2,…,N). You should choose two elements of this sequence and swap them.
A swap is nice if there is an integer M (1≤M<N) such that the sum of the first M elements of the resulting sequence is equal to the sum of its last N−M elements. Find the number of nice swaps.

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll sum = (n * (n+1)) / 2;
        if(sum % 2 == 0) {
            ll halfsum = sum / 2, prev, temp = 0;
            /*
            ll num = 1;
            for(; num < n; num++) {
                temp += num;
                if(temp + num + 1 > halfsum) {
                    break;
                }
            }
            */
            ll num = (ll)((long double)(sqrt(1 + 8 * halfsum) - 1) / 2);
            while((ll)((num * (num+1)) / 2) > halfsum) {
                num--;
            }
            temp = (num * (num+1)) / 2;
            if(temp < halfsum) {
                ll dif = n - num;
                cout<<dif<<endl;
            } else if(temp == halfsum) {
                ll a = num - 1, b = (n - num) - 1;
                ll pr = (a * (a+1)) / 2 + (b * (b+1)) / 2;
                ll count = (num < (n - num)) ? num : (n - num);
                cout<<pr + count<<endl;
            }
        } else {
            cout<<0<<endl;
        }
    }
    return 0;
}
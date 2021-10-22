/*

Chef has a new customer and he wants to prepare his order as soon as possible. While preparing, he sees that the mint sauce is finished. He has to run upstairs to get it from other kitchen. Chef is currently on the Xth stair. He has to climb all the way up to the Yth stair in minimum number of steps. In one step, Chef can do one of the following things:

Climb a single stair. ( i.e go from the Xth stair to the (X+1)th stair. )
Climb two stairs only if the final stair falls at a prime number position. ( i.e. go from the Xth stair to the (X+2)th stair, only if (X+2) is a prime number)
Help Chef reach the Yth stair from the Xth stair in minimum number of steps.

See Explanation for more clarity.
Note: The input files are large. The use of Fast I/O is recommended.

*/

#include <bits/stdc++.h>
using namespace std;
vector<int>prime(10000001, 1);
vector<int>fre(10000001, 1);

void sieve(){
    prime[0]=0;
    prime[1]=0;
    
    for(int i=2; i*i<=10000000; i++)
    {
        if(prime[i])
        {
            for(int j=i*i; j<=10000000; j+=i)
            {
                prime[j]=0;
            }
        }
    }
    
    for(int i=2; i<=10000000; i++)
    {
        fre[i]=fre[i-1]+prime[i];
    }
}

void solve(){
    long long x, y;
    cin >> x >> y;
    
    if(x==1 && y==2)
    {
        cout << 2 << endl;
        return;
    }
    if(x==1 && y==3)
    {
        cout << 2 << endl;
        return;
    }
    if(x==2 && y==2)
    {
        cout << 2 << endl;
        return;
    }
    
    long long ans = y-x;
    ans = ans - (fre[y]-fre[x]);
    
    if(prime[x+1])
    {
        ans=ans+1;
    }
    
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
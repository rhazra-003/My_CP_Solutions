/*

You are given two integers aa and bb.

In one move, you can choose some integer kk from 11 to 1010 and add it to aa or subtract it from aa. In other words, you choose an integer k∈[1;10]k∈[1;10] and perform a:=a+ka:=a+k or a:=a−ka:=a−k. You may use different values of kk in different moves.

Your task is to find the minimum number of moves required to obtain bb from aa.

You have to answer tt independent test cases.

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base:: sync_with_stdio(false), cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        if(b < a)
        {
            swap(a, b);
        }
        
        long long sub = 0, sum = 0, div = 0, mod = 0;
        
        sub = b - a;
        div = sub / 10;
        mod = sub % 10;
        sum = div;
        
        if(mod > 0)
        {
            sum++;
        }
        
        cout << sum << endl;
    }

    return 0;
}

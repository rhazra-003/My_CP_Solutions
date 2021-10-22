/*

There are two sisters Alice and Betty. You have n candies. You want to distribute these n candies between two sisters in such a way that:

Alice will get a (a>0) candies;
Betty will get b (b>0) candies;
each sister will get some integer number of candies;
Alice will get a greater amount of candies than Betty (i.e. a>b);
all the candies will be given to one of two sisters (i.e. a+b=n).
Your task is to calculate the number of ways to distribute exactly n candies between sisters in a way described above. Candies are indistinguishable.

Formally, find the number of ways to represent n as the sum of n=a+b, where a and b are positive integers and a>b.

You have to answer t independent test cases.

*/

#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        
        if(n%2==0)
        {
            cout << n/2-1 << endl;
        }
        else 
        {
            cout<<n/2<<endl;
        }
    }
    
    return 0;
}

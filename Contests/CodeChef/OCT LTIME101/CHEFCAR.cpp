/*

Chef is a great mechanic. As the cost of petrol is increasing day by day he decided to build a water car to take his girlfriend Natasha on a date. Water car has great build quality but is able to travel only 11 Km on every 11 liter of water. To show off his water car to Natasha he took her to the formula racing track which is an (N−1N−1) km long road with checkpoints numbered 11 to NN from left to right. The distance between two adjacent checkpoints is 11 Km.

Initially, Chef is at checkpoint number 11 and the tank of the water car is empty. At every checkpoint, there is a water station, but the cost of filling 11 liter of water at a checkpoint is equal to the checkpoint number. Chef can not store more than VV liters of water in the tank of a car. Chef is interested in both minimum as well as the maximum cost of filling that can happen to reach the checkpoint number NN.

You shouldn't have any water left after reaching NthNth checkpoint. Also, you are not allowed to pour out water.

*/

#include <iostream>
using namespace std;

void solve()
{
    long long n, v;
    cin >> n >> v;
    long long ans1 = n*(n-1)/2;
    cout << ans1 << " ";
    
    if(v >= n-1)
    {
        cout << n-1 << endl;
    }
    
    else
    {
        long long rem = n-v;
        long long ans = rem*(rem+1)/2;
        ans = ans + (v-1);
        cout << ans << endl;
    }
}

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(0);cout.tie(0); 
    
    int t=1; 
    cin>>t; 
    while(t--){
         solve(); 
    }
	return 0;
}

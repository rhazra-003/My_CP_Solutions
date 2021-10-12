/*

Given an integer n, return true if n has exactly three positive divisors. Otherwise, return false.
An integer m is a divisor of n if there exists an integer k such that n = k * m.

*/

class Solution {
public:
    bool isThree(int n)
    {
        bool hash[n + 1];
        memset(hash, true, sizeof(hash));
        for (int p = 2; p * p < n; p++)
            if (hash[p] == true)
                for (int i = p * 2; i < n; i += p)
                    hash[i] = false;
  
        int total = 1;
        for (int p = 2; p <= n; p++) {
            if (hash[p]) 
            {
                int count = 0;
                if (n % p == 0) {
                    while (n % p == 0) {
                        n = n / p;
                        count++;
                    }
                    total = total * (count + 1);
                }
            }
        }
        if (total==3)
        { 
            return true;
        }
         else
         {  
            return false;
         }
    }
    
};
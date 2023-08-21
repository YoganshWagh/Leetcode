// https://leetcode.com/problems/count-primes/description/

class Solution {
public:
    int countPrimes(int n) {
        
        //BY SIEVE OF ERATOSTHENES:

        int count = 0;
        //INTIALISING VECTOR MARKING ALL NUMBERS AS PRIME
        vector<bool> prime( n+1, true );

        //initialising 0 and 1 as non prime manually.
        prime[0] = prime[1] = false;

        for( int i=2; i<n; i++ )
        {
            if( prime[i] )
            {
                count++;

                for( int j=2*i; j<n; j=j+i )
                {
                    prime[j] = false;
                }
            }
        }

        return count;

    }
};
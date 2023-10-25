// QUESTION: https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/
// SOLUTION: https://youtu.be/S1qIg-prrK4?si=Sf307sydXBa8qWZV

class Solution {
public:
    bool solve( int n, int x )
    {
        //base condition:
        if( n == 0 ) return true;

        //choice condition:
        while( x <= n )
        {
            if( solve( n-x, x*3 ) == true )
                return true;
            x = x*3;
        }
        return false;
    }
    bool checkPowersOfThree(int n) {
        //represents power of three. 
        int x = 1;
        return solve(n,x);
    }
};

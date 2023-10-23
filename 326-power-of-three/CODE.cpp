// QUESTION: https://leetcode.com/problems/power-of-three/description/

class Solution {
public:
    bool isPowerOfThree(int n) {
        
        int i = 0;
        while( i < 100 )
        {
            if( n == pow(3,i) )
                return true;
            i++;
        }
        return false;
    }
};

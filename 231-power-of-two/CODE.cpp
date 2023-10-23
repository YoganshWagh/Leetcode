// QUESTION: https://leetcode.com/problems/power-of-two/description/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int i = 0;
        while( i < 100 )
        {
            if( n == pow(2,i) )
                return true;
            i++;
        }
        return false;
    }
};

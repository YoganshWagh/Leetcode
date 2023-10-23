// QUESTION: https://leetcode.com/problems/power-of-four/description/?envType=daily-question&envId=2023-10-23

class Solution {
public:
    bool isPowerOfFour(int n) {
        
        int i = 0;
        while( i < 100 )
        {
            if( n == pow(4,i) )
                return true;
            i++;
        }
        return false;
    }
};

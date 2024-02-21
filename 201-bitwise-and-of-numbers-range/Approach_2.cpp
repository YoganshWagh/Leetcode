//QUESTION: https://leetcode.com/problems/bitwise-and-of-numbers-range/description/
//REFERENCE: https://youtu.be/3XYQLHSoew8?si=QKowjvDIBB5jdgyi
//Approach 2: By reducing set bits until right > left.
//T.C = O(logn)
//S.C = O(1)

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) 
    {
        while(right > left)
        {
            //n = n & n-1
            right = right & (right-1);
        }
        return right;
    }
};
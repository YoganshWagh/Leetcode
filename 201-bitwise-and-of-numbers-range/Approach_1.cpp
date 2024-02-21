//QUESTION: https://leetcode.com/problems/bitwise-and-of-numbers-range/description/
//REFERENCE: https://youtu.be/3XYQLHSoew8?si=QKowjvDIBB5jdgyi
//Approach 1: Using Longest Common Prefix.
//T.C = O(logn)
//S.C = O(1)

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) 
    {
        int ShiftCount = 0;

        //we will find longest common prefix through this loop.
        //i.e the common bits/pattern in both. Once we find common
        //it is obviously answer.
        while(left != right)
        {
            left = (left >> 1);
            right = (right >> 1);
            ShiftCount++;
        }

        //we will return answer by left shifting the bits to no.
        //of times we have right shifted it.
        return (left << ShiftCount);
    }
};
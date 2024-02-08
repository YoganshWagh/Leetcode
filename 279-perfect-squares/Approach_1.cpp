//QUESTION: https://leetcode.com/problems/perfect-squares/description/
//REFERENCE: https://youtu.be/Zbn8in7hpXY?si=xzryALdqwz1buD93
//Approach 1: Using Recursion + Memoization.
//T.C = O(n^2), the total number of subproblems solved is proportional to the sum of the first n square numbers. This sum can be approximated as O(n^2).
//S.C = O(n), where the space required for the memoization array is O(n), since it stores solutions for each value from 0 to n.

class Solution {
public:
    int arr[10001];

    int helper(int n)
    {
        if(n == 0) 
            return 0;

        if(arr[n] != -1) 
            return arr[n];

        int minCount = INT_MAX;

        for(int i=1; i*i <= n; i++)
        {
            int result = 1 + helper(n - i*i);
            minCount = min(minCount, result);
        }
        return arr[n] = minCount;
    }

    int numSquares(int n) 
    {
        memset(arr, -1, sizeof(arr));
        return helper(n);
    }
};
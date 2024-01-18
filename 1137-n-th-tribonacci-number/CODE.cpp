//QUESTION: https://leetcode.com/problems/n-th-tribonacci-number/description/
//REFERENCE: https://youtu.be/gQpeR_O405g?si=QsURvP45fsk-LALj
//T.C = O(n)
//S.C = O(1)

//Approach: Using DP since using Recursion Time Limit Exceeds.
class Solution {
public:
    int tribonacci(int n) 
    {
        int dp[38];

        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        
        for(int i=3; i<=n; i++)
            dp[i] =dp[i-1] + dp[i-2] + dp[i-3];

        return dp[n];
    }
};

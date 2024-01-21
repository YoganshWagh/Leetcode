//QUESTION: https://leetcode.com/problems/house-robber/description/
//REFERENCE: https://youtu.be/SI6Pm8AKqnQ?si=akAUU-X2ReuXco84
//T.C = O(n)
//S.C = O(1)
//Approach 1: Using Recursion & Memoization (Top Down).

class Solution {
public:
    int t[101];
    int solve(vector<int>& nums, int i, int n)
    {
        if(i >= n) return 0;

        if(t[i] != -1) return t[i];

        int steal = nums[i] + solve(nums,i+2,n);
        int skip = solve(nums,i+1,n);

        return t[i] = max(skip,steal);
    }

    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        memset(t, -1, sizeof(t));
        return solve(nums, 0, n);
    }
};
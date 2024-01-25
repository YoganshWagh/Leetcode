//QUESTION: https://leetcode.com/problems/longest-common-subsequence/
//REFERENCE: https://youtu.be/aJNu_DLyOxY?si=7HeOjF4YrnVXr-IN
//Approach 1: Using Recursion and Memoization.
//T.C =  O(n * m), where n is the length of string s1 and m is the length of string s2.
//S.C = O(n * m) due to the memoization table and O(n + m) for the recursion stack.

class Solution {
public:
    int n, m;
    int t[1001][1001];
    int solve(string& s1, string& s2, int i, int j)
    {
        if(i >= n || j >= m) return 0;

        if(t[i][j] != -1) return t[i][j];

        if(s1[i] == s2[j]) 
            return t[i][j] = 1 + solve(s1,s2,i+1,j+1);
        
        int include_i = solve(s1,s2,i+1,j);
        int include_j = solve(s1,s2,i,j+1);

        return t[i][j] = max(include_i, include_j);
    }

    int longestCommonSubsequence(string s1, string s2) 
    {
        n = s1.size();
        m = s2.size();
        memset(t,-1,sizeof(t));
        return solve(s1,s2,0,0);
    }
};
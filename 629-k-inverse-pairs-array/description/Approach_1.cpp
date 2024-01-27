//QUESTION: https://leetcode.com/problems/k-inverse-pairs-array/description/
//REFERENCE: https://youtu.be/y9yo1kyW7Bg?si=d4RG_ZP5jRNpZyXI
//Approach 1: Using Recursion & Memoization.
//T.C = O(n * k) with memoization, where n and k are the input parameters.
//S.C =  O(1) with a constant-sized memoization table.

class Solution {
public:
    int MOD = 1e9 + 7;
    int t[1001][1001];
    int solve(int n, int k)
    {
        if(n == 0) return 0;
        if(k == 0) return 1; //base case.
        if(t[n][k] != -1) return t[n][k];

        int result = 0;
        //for array of length n, we can have only n-1 inversions.
        for(int inv = 0; inv <= min(k,n-1); inv++)
        {
            //I already have inv no. of inversions. I need k-inv 
            //number of inversions more.
            result = (result % MOD + solve(n-1,k-inv) % MOD) % MOD;
        }
        return t[n][k] = result;
    }

    int kInversePairs(int n, int k) 
    {
        memset(t,-1,sizeof(t));
        return solve(n,k);   
    }
};
//QUESTION: https://leetcode.com/problems/partition-array-for-maximum-sum/description/
//REFERENCE: https://youtu.be/LvvIcZWtuoY?si=UnNjQyWPV3q_PQeb
//T.C = O(n*k), where 'n' is number of levels of tree & 'k' is number of partitions in each level of tree.
//S.C = O(n)

//Approach 1: Using Recursion + Memoization.
class Solution {
public:
    int n;
    int t[501];  //since only one variable 'i' is changing.
    int solve(int i, vector<int>& arr, int k)
    {
        if(i >= n) return 0;
        if(t[i] != -1) return t[i];

        int result = 0;
        int curr_max = -1;

        for(int j=i; j<n && j-i+1 <= k; j++)
        {
            curr_max = max(curr_max, arr[j]);
            //current subarray = arr[i to j]
            result = max(result, curr_max*(j-i+1) + solve(j+1,arr,k));
        }
        return t[i] = result;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) 
    {
        n = arr.size();
        memset(t,-1,sizeof(t));
        return solve(0,arr,k);
    }
};
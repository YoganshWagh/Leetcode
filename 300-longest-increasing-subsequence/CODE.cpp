//QUESTION: https://leetcode.com/problems/longest-increasing-subsequence/description/
//REFERENCE:
//T.C = O(n*n)  &  S.C = O(n) 

class Solution {
public:
        //Approach-2 (Bottom Up DP) O(n*n)
        int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> t(n, 1);
        int maxL = 1;
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<i; j++) {
                if(nums[j] < nums[i]) {
                    t[i] = max(t[i], t[j]+1);
                    maxL = max(maxL, t[i]);
                }
            }
        }
        return maxL;
    }
};
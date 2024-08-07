//QUESTION: https://leetcode.com/problems/subarray-sum-equals-k/description/
//Approach 1: By Brute Force.
//T.C = O(n*n), where n is the size of nums arrsy.
//S.C = O(1), sinc eno extra amount of space is used.
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int count = 0;

        for(int i=0; i<n; i++){
            int sum = nums[i];

            if(sum == k)
                count++;

            for(int j=i+1; j<n; j++){
                sum += nums[j];

                if(sum == k)
                    count++;
            }
        }
        return count;
    }
};
//QUESTION: https://leetcode.com/contest/weekly-contest-368/problems/minimum-sum-of-mountain-triplets-i/

class Solution {
public:
    int minimumSum(vector<int>& nums) {
        
     int n = nums.size();
     int minSum = INT_MAX;

    for (int j = 1; j < n - 1; j++) {
        int leftMin = INT_MAX;
        int rightMin = INT_MAX;

        for (int i = 0; i < j; i++) {
            if (nums[i] < nums[j]) {
                leftMin = min(leftMin, nums[i]);
            }
        }

        for (int k = j + 1; k < n; k++) {
            if (nums[k] < nums[j]) {
                rightMin = min(rightMin, nums[k]);
            }
        }

        if (leftMin != INT_MAX && rightMin != INT_MAX) {
            minSum = min(minSum, leftMin + nums[j] + rightMin);
        }
    }

    return minSum == INT_MAX ? -1 : minSum;

        
    }
};

// QUESTION: https://leetcode.com/problems/maximum-score-of-a-good-subarray/?envType=daily-question&envId=2023-10-22
// SOLUTION: https://leetcode.com/problems/maximum-score-of-a-good-subarray/solutions/4194071/92-13-two-pointers/?envType=daily-question&envId=2023-10-22

class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int left = k, right = k;
        int min_val = nums[k];
        int max_score = min_val;

        while (left > 0 || right < nums.size() - 1) {
            if (left == 0 || (right < nums.size() - 1 && nums[right + 1] > nums[left - 1])) {
                right++;
            } else {
                left--;
            }
            min_val = min(min_val, min(nums[left], nums[right]));
            max_score = max(max_score, min_val * (right - left + 1));
        }
        
        return max_score;
    }
};

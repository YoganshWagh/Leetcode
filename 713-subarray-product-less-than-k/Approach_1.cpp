//QUESTION: https://leetcode.com/problems/subarray-product-less-than-k/description/
//REFERENCE: https://youtu.be/9fmKB1F1pEE?si=Y_GfPNrEUECEnHnO
//Approach  : Standard Sliding window Problem
//T.C : O(N)
//S.C : O(1)

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1)
            return 0;
        int n = nums.size();
        int count = 0;
        
        int left = 0;
        int right = 0;
        int prod = 1;
        
        while(right < n){
            prod *= nums[right];
            
            while(prod >= k) {
                prod /= nums[left];
                left++;
            }
            
            count += (right-left)+1;
            right++;
        }
        return count;
    }
};

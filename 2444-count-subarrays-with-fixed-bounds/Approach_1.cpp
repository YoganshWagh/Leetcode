//QUESTION: https://leetcode.com/problems/count-subarrays-with-fixed-bounds/description/
//REFERENCE: https://youtu.be/z6LwIkEn9qc?si=5z_TXyclZam_BEQz
//Appraoch 1: Using linear traversal with some conditional checks.
//T.C =  O(n), where n is the size of the input vector nums. This is because the code iterates through the vector once with a single loop.
//S.C = O(1), meaning it uses constant space. 

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) 
    {
        long long ans = 0;
        int minKposition = -1;
        int maxKposition = -1;
        int culpritIndex = -1;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] < minK || nums[i] > maxK)
                culpritIndex = i;
            
            if(nums[i] == minK)
                minKposition = i;

            if(nums[i] == maxK)
                maxKposition = i;

            long long smaller = min(maxKposition, minKposition);
            long long temp = smaller - culpritIndex;
            ans += (temp<=0)? 0:temp;
        }
        return ans;
    }
};
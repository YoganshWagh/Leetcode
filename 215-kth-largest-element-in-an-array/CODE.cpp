//https://leetcode.com/problems/kth-largest-element-in-an-array/description/
//IN O(NlogN) TIME COMPLEXITY

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        //Question Based on Heap Sort:
        int n = nums.size();

        //Sorting Array:
        sort( nums.begin(), nums.end() );

        //Kth largest element is:
        return nums[n-k];
        
    }
};
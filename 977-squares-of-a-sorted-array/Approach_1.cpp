//QUESTION: https://leetcode.com/problems/squares-of-a-sorted-array/description/
//Approach 1: Squaring first and then sorting the array.
//T.C = O(nlogn), where 'n' is number of elements in the array.
//S.C = O(1)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int n = nums.size();
        //Step 1: Squaring elements of array.
        for(int i=0; i<n; i++)
            nums[i] = nums[i]*nums[i];

        //Step 2: Sorting the array.
        sort(nums.begin(), nums.end());
        return nums;
    }
};
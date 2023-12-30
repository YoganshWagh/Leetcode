//QUESTION: https://leetcode.com/problems/array-partition/description/
//REFERENCE: https://youtu.be/HUXFVwH2WTs?si=6YJM_2WHm-Xwgs6X

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {

        //Step 1: Sort the array.
        sort(nums.begin(),nums.end());
        int sum=0;
        
        //Step 2: Add the 1st number then 3rd then 5th.
        for(int i=0;i<nums.size();i+=2)
            sum+=nums[i];
            
        return sum;
    }
};
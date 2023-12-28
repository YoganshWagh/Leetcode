//QUESTION: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/
//SOLUTION: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/solutions/4062386/0-n-easy-to-understand-solution/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i = 0;
        // int ele= nums[0];
        for(auto ele : nums)
        {
            if( i==0 || i==1 || nums[i-2] != ele )
            {
                nums[i] = ele;
                i++;
            }
        }
        return i ;
    }
};
//Approach 3: Using Smart Approach.
//T.C = O(n)
//S.C = O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int n = nums.size();
        int dup = -1;

        for(int i=0; i<n; i++) 
        {
            if(nums[abs(nums[i]) - 1] < 0 )
                dup = abs(nums[i]);
            else
                nums[abs(nums[i]) - 1] *= -1;
        }
        return dup;
    }
};
//Approach 2: Smart Approach.
//T.C = O(n)
//S.C = O(1)

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int n = nums.size();
        int dup = -1, miss = -1;

        //to find duplicate.
        for(int i=0; i<n; i++)
        {
            if(nums[abs(nums[i]) - 1] < 0)
                dup = abs(nums[i]);
            else
                nums[abs(nums[i]) - 1] *= -1;
        }

        //to find missing.
        for(int i=0; i<n; i++)
        {
            if(nums[i] > 0)
            {
                miss = i+1;
                break;
            }
        }
        return {dup,miss};
    }
};
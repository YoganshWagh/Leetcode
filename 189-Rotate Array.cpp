//https://leetcode.com/problems/rotate-array/description/

//CODE:
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        //VECTOR TO STORE (I+K)%N VALUES:
        vector<int> temp(n);

        for( int i=0; i<n; i++ )
        {
            temp[(i+k)%n] = nums[i];
        }

        //COPYING TEMP TO NUMS:
        nums = temp;

    }
};

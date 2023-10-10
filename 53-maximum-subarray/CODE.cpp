//QUESTION: https://leetcode.com/problems/maximum-subarray/
//REFERENCE: https://www.youtube.com/watch?v=w_KEocd__20

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        //KADANE'S ALGORITHM USED
        int sum = 0;
        int maxi = INT_MIN;    //OR nums[0]

        for( auto x : nums )
        {
            sum += x;
            maxi = max( sum, maxi );
            if( sum < 0 ) sum = 0;
        }

        return maxi;
    }
};

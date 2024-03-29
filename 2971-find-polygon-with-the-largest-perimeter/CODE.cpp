//QUESTION: https://leetcode.com/problems/find-polygon-with-the-largest-perimeter/description/
//REFERENCE: https://youtu.be/3RUkd0SPnPk?si=BPLHzTo6ujV1Mbmd
//T.C : O(nlogn)
//S.C : O(1)

class Solution {
public:
    long long largestPerimeter(vector<int>& nums) 
    {
        int n = nums.size();
        sort(begin(nums), end(nums));

        long long perimeter = 0;
        long long cumSum    = 0;
        
        for(int i = 0; i < n; i++) 
        {
            if(nums[i] < cumSum) 
                perimeter = nums[i] + cumSum;
            cumSum += nums[i];
        } 
        return perimeter == 0 ? -1 : perimeter; 
    }
};

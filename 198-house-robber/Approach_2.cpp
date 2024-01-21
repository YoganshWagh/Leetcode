//QUESTION: https://leetcode.com/problems/house-robber/description/
//REFERENCE: https://leetcode.com/problems/house-robber/solutions/4600148/beats-100-c-java-python-js-explained-with-video-dynamic-programming-space-optimized/?source=submission-ac
//T.C = O(n)
//S.C = O(1)

class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int rob = 0;
        int norob = 0;
        
        for (int i = 0; i < nums.size(); i++) 
        {
            int newRob = norob + nums[i];
            int newNoRob = max(norob, rob);
            rob = newRob;
            norob = newNoRob;
        }
        return max(rob, norob);
    }
};
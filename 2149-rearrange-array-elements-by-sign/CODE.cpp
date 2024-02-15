//QUESTION: https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
//Approach 1: Using two different vectors for separating +ve and -ve numbers.
//T.C = O(n)
//S.C = O(n)

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int> neg, pos, ans;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] < 0) neg.push_back(nums[i]);
            else pos.push_back(nums[i]);
        }

        for(int i=0; i<neg.size(); i++)
        {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]); 
        }
        return ans;
    }
};
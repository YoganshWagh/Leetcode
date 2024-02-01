//QUESTION: https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/description/
//REFERENCE: https://youtu.be/lmLHdY7nd2M?si=2F0N72PWoSYnNVhM
//T.C = O(n log n + n/3) = O(n log n), where for sorting O(nlogn) and for traversing array triplet O(n/3).
//S.C = O(n),  O(m), where m is the number of triplets formed. In the worst case, m is n/3 (when n is a multiple of 3).

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) 
    {
        int n = nums.size();
        
        //for storing result:
        vector<vector<int>> ans;

        //sorting to find nearest triplets.
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i+=3)
        {
            //checking i, i+1, i+2
            if(nums[i+2] - nums[i] > k)
                return {};

            ans.push_back({nums[i],nums[i+1],nums[i+2]});
        }
        return ans;    
    }
};
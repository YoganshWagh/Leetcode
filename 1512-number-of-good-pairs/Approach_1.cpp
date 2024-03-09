//QUESTION: https://leetcode.com/problems/number-of-good-pairs/description/
//T.C = O(n*n), where n is number of elements in the array.
//S.C = O(1), since no extra space is used.

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int countPairs = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] == nums[j])
                    countPairs++;
            }
        }
        return countPairs;
    }
};
//QUESTION: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/
//T.C = O(n), where n is number of elements traversed.
//S.C = O(1), since no extra space is used.

class Solution {
public:
    int finalValueAfterOperations(vector<string>& nums) {
        int x = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == "++X" || nums[i] == "X++")
                x++;
            else
                x--;
        }
        return x;
    }
};
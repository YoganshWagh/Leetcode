//QUESTION: https://leetcode.com/problems/minimum-increment-to-make-array-unique/description/
//Approach 1: Using Greedy Approach.
//T.C = O(nlogn), where 'n' is the size of the array.
//S.C = O(1), assuming in-place sorting.
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int moves = 0;

        for(int i=0; i<n-1; i++){
            while(nums[i+1] <= nums[i]){
                nums[i+1] += 1;
                moves++;
            }
        }
        return moves;
    }
};
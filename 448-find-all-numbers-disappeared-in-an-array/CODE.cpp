//QUESTION: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        unordered_map<int,int> map;
        int n = nums.size();
        int k = 1;
        for( int x : nums ) map[x]++;
        //For storing answer without using extra space.
        nums.clear();

        while(k<=n)
        {
            if( map[k] == 0 ) nums.push_back(k);
            k++;
        }
        return nums;
    }
};
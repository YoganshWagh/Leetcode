//QUESTION: https://leetcode.com/problems/count-elements-with-maximum-frequency/description/
//Approach: Using Hash Table.
//T.C = O(n), where n is number of elements in the array.
//S.C = O(n), where n amount of space is required to store n elements of nums.

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        //Step 1: Calculating Frequency of elements.
        unordered_map<int,int> umap;
        for(auto x : nums)
            umap[x]++;

        //Step 2: Finding out maximum Frequency in the map.
        int max = 0;
        for(auto x : umap)
        {
            if(max < x.second){
                max = x.second;
            }
        }

        //Step 3: Counting the the number of elements who has the same frequency.
        int count = 0;
        for(auto x : umap){
            if(x.second == max)
                count++;
        }
        return count*max;
    }
};
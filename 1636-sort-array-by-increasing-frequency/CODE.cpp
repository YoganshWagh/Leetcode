//QUESTION: https://leetcode.com/problems/sort-array-by-increasing-frequency/description/
//REFERENCE: https://youtu.be/PjKjbpI2Z3s?si=nDlBBs6TucpQyqUC
//Question is solved using lambda function

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        //FRQUENCY CALCULATION:
        unordered_map<int,int> umap;
        for( auto x : nums )
            umap[x]++;

        //MODIFIED SORT FUNCTION BY USING LAMBDA FUNCTION:
        // [&] access outside data as a reference
        sort( nums.begin(), nums.end(), [&]( int a, int b )
            { return umap[a] != umap[b] ? umap[a]<umap[b] : a>b; } );

        return nums;
    }
};
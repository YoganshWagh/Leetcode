class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        //Approach 2: Using Hash Table.
        unordered_map<int,int> umap;
        int missing;
        for( auto x : nums ) umap[x]++;

        for( auto x : umap ) 
        {
            if( x.second > 1 )
                return x.first;
        }
        return 0;
    }
};
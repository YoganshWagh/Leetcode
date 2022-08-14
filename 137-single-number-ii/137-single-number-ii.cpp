class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int> mapp;
        for( int i=0; i<nums.size(); ++i )
        {
            int k = nums[i];
            mapp[k]++;
        }
        
        //traversing of map:
        for( auto x: mapp )
        {
            if( x.second == 1 )
            {
                return x.first;
            }
        }
        
        return 0;
    }
};
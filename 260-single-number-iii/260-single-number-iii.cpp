class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        vector<int> arr;
        map<int,int> mapp;
        for( int i=0; i < nums.size(); ++i )
        {
            int k = nums[i];
            mapp[k]++;
        }
        
        //traverse of map:
        for( auto x : mapp )
        {
            if( x.second == 1 )
            {
                arr.push_back(x.first);
            }
        }
        
        return arr;
    }
};
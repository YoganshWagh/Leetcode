class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
       
        // 1,2,2,3,5
        sort( nums.begin(), nums.end() );
        vector<int> v;
        for( int i = 0; i<nums.size(); ++i )
        {
            if( nums[i] == target )
            {
                v.push_back(i);
            }
        }
        return v;
    }
};
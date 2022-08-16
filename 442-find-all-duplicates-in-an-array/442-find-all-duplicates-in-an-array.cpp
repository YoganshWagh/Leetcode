class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        map<int,int> mp;
        vector<int> v;
        for( auto x : nums )
        {
            mp[x]++;
        }
        
        for( auto y : mp )
        {
            if( y.second == 2 )
            {
                v.push_back(y.first);
            }
        }
        
        return v;
    }
};
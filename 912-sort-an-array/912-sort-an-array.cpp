class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        vector<int> v;
        for( auto x : nums )
        {
            v.push_back(x);
        }
        
        sort( v.begin(), v.end() );
        return v;
    }
};
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> set( nums1.begin(), nums1.end() );
        nums1.clear();
        for( auto x : nums2 )
        {
            if( set.find(x) != set.end() )
            {
                nums1.push_back(x);
                set.erase(x);
            }
        }
        return nums1;
    }
};
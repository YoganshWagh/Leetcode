class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        map<int, int> mp, cnt;
        for(int i : arr) ++mp[i];
        for(auto m : mp)
            if(++cnt[m.second] > 1) return false;
        return true;
        
    }
};
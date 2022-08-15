class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;
        for(auto x:arr){
            map[x]++;
        }
        unordered_set<int> set;
        int count(0);
        for(auto x:map){
            count++;
            set.insert(x.second);
        }
        if(count==set.size()) return true;
        return false;
    }
};
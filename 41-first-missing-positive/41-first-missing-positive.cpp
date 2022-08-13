class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       unordered_map<int,int> map;
        int k=1;
        for(auto x: nums) map[x]++;
        while(1){
            if(map[k]==0) return k;
            k++;
        }
        return 0;
       
    }
};
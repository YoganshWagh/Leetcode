class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            set.insert(nums[i]);
        }
        // 0 1 2 
        int k = 1;
       while(1){
           if(set.find(k)==set.end()){
               return k;
           }
           k++;
       }
        return 0;
    }
};
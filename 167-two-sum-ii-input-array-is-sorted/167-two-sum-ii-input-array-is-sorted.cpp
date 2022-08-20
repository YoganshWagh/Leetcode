class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
      int n=numbers.size();
        vector<int>v;
        int i=0,j=n-1;
        while(i<j){
            int p=numbers[i]+numbers[j];
            if(p<target){
                i++;
            }
            else if(p>target){
                j--;
            }
            else{
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
            }
        }
        return v;
    }
};
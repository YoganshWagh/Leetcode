//QUESTION: https://leetcode.com/problems/set-mismatch/description/
//REFERENCE: https://youtu.be/j89Yzq3IwVY?si=Ug4UcJYqTR8YbCRx
//T.C = O(n)
//S.C = O(n)

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int dup = 0, miss = 0;
        map<int,int> mp;
        
        for(auto x : nums) mp[x]++;

        for(int i=1; i<=nums.size(); i++)
        {
            if(mp.find(i) == mp.end()) miss = i;
            if(mp[i] == 2) dup = i;
        }
        return {dup,miss};
    }
};
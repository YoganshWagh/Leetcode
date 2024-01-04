//QUESTION: https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty/description/
//REFERENCE: https://youtu.be/lkPNh2M1lUs?si=h8laJflinWmL55PJ
//T.C = O(n)  &  S.C = O(n)

class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int count = 0;
        unordered_map<int,int> umap;
        for( auto x : nums ) umap[x]++;

        for( auto x : umap )
        {
            int freq = x.second;
            if( x.second <= 1 )
                return -1;
            
            count += ceil((double)freq/3);
        }
        return count;
    }
};
// QUESTION: https://leetcode.com/problems/find-the-original-array-of-prefix-xor/
// SOLUTION: https://youtu.be/xmmJRjZC4B4?si=tnKjTKApQiMl7tEB

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        
        int n = pref.size();
        //WE HAVE TO RETURN VECTOR OF SIZE "n":
        vector<int> ans(n);
        for( int i(0); i<n; i++ )
        {
            if( i==0 ) ans[i] = pref[i];
            else ans[i] = pref[i] ^ pref[i-1];
        }
        
        return ans;
    }
};
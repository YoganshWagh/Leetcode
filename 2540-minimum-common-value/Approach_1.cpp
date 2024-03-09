//QUESTION: https://leetcode.com/problems/minimum-common-value/description/
//REFERENCE: https://youtu.be/S2u88Gzby0U?si=WsF0mudUtP7rZ8s8
//Approach 1: Using Extra Space.
//T.C = O(n+m), where n and m are size of nums1 and nums2 and each element is traversed once.
//S.C = O(n), amount of space used to store elements of nums1 in set.

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) 
    {       
        unordered_set<int> st(nums1.begin(), nums1.end());

        for(auto x : nums2){
            if(st.find(x) != st.end())
                return x;
        }
        return -1;
    }
};
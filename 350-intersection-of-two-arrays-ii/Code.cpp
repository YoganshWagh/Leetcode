//QUESTION: https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
//Approach 1: Using Two Pointer.
//T.C = O(nlogn + mlogm), where m & n are size of nums1 and nums2.
//S.C = O(min(n,m)), where resulting array 'ans' is intersection of arrays.
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        sort( nums1.begin(), nums1.end() );
        sort( nums2.begin(), nums2.end() );
        vector<int> ans;
        int i = 0, j = 0;

        while( i<nums1.size() & j<nums2.size() )
        {
            if( nums1[i] == nums2[j] )
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }

            else if( nums1[i] < nums2[j] )
                i++;

            else
                j++;
        }
        return ans;
    }
};

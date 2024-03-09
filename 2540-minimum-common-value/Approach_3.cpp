//Approach 3: Using Two Pointer.
//T.C = O(m+n), in worst case we have to traverse both array completely. 
//S.C = O(1), since no extra space is used.

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int i = 0, j = 0;

        while(i<m && j<n){
            if(nums1[i] == nums2[j])
                return nums1[i];
            else if(nums1[i] < nums2[j])
                i++;
            else
                j++;
        }
        return -1;
    }
};
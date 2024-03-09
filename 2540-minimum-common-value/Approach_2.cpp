//Approach 2: Using Binary Search.
//T.C = O(n+log(m)), where n and m is elements in both arrays.
//S.C = O(1), since no extra space is used.

class Solution {
public:
    bool BinarySearch(vector<int>& nums, int x){
        int l = 0, r = nums.size()-1;

        while(l <= r){
            int mid = l + (r-l)/2;

            if(nums[mid] == x)
                return true;
            else if(nums[mid] < x)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return false;
    }
    int getCommon(vector<int>& nums1, vector<int>& nums2) 
    {       
        for(auto x : nums1){
            if(BinarySearch(nums2,x))
                return x;
        }
        return -1;
    }
};
//QUESTION: https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/description/
//Approach 1: Using Sorting.
//T.C = O(nlogn), where 'n' is the size of arr and target.
//S.C = O(1), since no extra space is used.
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) 
    {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());

        return target == arr;
    }
};
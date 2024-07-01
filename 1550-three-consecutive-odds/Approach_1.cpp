//QUESTION: https://leetcode.com/problems/three-consecutive-odds/
//Approach 1: Using Brute Force.
//T.C = O(n), where in the worst case we need to traverse entire array.
//S.C = O(1), since no extra space is used.
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) 
    {
        int k = 0; //for counting number of odds.
        for(int i=0; i<arr.size(); i++){
            if(k == 3) 
                return true;

            if(arr[i] % 2 == 1)
                k++;
            else
                k = 0;
        }
        return k == 3? true:false;
    }
};
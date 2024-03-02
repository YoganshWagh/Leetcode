//Approach 2: By two pointer.
//T.C = O(n), where 'n' is number of elements in the array.
//S.C = O(n)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int n = nums.size();
        int i = 0, j = n-1, k=n-1;
        vector<int> ans(n);

        while(i<=j)
        {
            int a = nums[i]*nums[i];
            int b = nums[j]*nums[j];
            
            if(a>b) 
            {
                ans[k] = a;
                i++;
            }
            else
            {
                ans[k] = b;
                j--;
            }
            k--;
        }

        return ans;
    }
};
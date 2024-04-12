//QUESTION: https://leetcode.com/problems/trapping-rain-water/description/
//Approach: Two Pointer.
//T.C = O(n), where n is the number of elements in the height vector.
//S.C = O(n), because it uses two additional arrays, left and right, each with the same size as the input vector height.
class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n = height.size();
        vector<int> left(n);
        vector<int> right(n);
        
        left[0] = height[0];
        for(int i=1; i<n; i++){
            left[i] = max(height[i],left[i-1]);
        }
        
        right[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--){
            right[i] = max(height[i],right[i+1]);
        }
        
        int ans = 0;
        for(int i=0; i<n; i++){
            ans += min(right[i], left[i]) - height[i];
        }
        
        return ans;
    }
};
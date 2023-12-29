//QUESTION: https://leetcode.com/problems/missing-number/description/
//REFERENCE1:https://leetcode.com/problems/missing-number/solutions/4461518/beats-100-with-java-86-c-easiest-logic-6-lines-code-java-100-runtime/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        //Step 1: Find the length of the array.
        int n = nums.size();

        //Step 2: Calculate the actual sum using mathematical formula.
        long actualSum = (long)n * (n+1) / 2;

        //Step 3: Calculate the given sum.
        long sum = 0;
        for( int x : nums )
            sum += x;

        //Step 4: Return the difference between the actual and given sum.
        return (int)(actualSum - sum);
    }
};
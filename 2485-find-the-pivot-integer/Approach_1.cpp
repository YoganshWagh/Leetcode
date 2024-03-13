//QUESTION: https://leetcode.com/problems/find-the-pivot-integer/
//REFERENCE: https://youtu.be/cPaq3AABkLc?si=wGOtOYsbRM9uFsFh
//Approach 1: Using Brute Force.
//T.C = O(n*n), where because there are two nested loops, each iterating up to 'n'. The outer loop iterates 'n' times, and the inner loops iterate 'pivot' and 'n-pivot' times respectively, for each 'pivot' from 1 to 'n'.
//S.C = O(1), since we haven't used any extra space.

class Solution {
public:
    int pivotInteger(int n) {

        for(int pivot = 1; pivot<=n; pivot++){
            int leftSum = 0;
            int rightSum = 0;

            for(int j=1; j<=pivot; j++){
                leftSum += j;
            }

            for(int j=pivot; j<=n; j++){
                rightSum += j;
            }

            if(leftSum == rightSum) 
                return pivot;
        }
        return -1;
    }
};
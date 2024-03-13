//Approach 2: Using Total sum formula of Mathematics.
//T.C = O(n), where n is number of elements we have traversed.
//S.C = O(1), since we haven't used any extra space.

class Solution {
public:
    int pivotInteger(int n) {
        int totalSum = n*(n+1)/2;

        for(int pivot = 1; pivot<=n; pivot++){
            int leftSum = 0;
            int rightSum = 0;

            leftSum = pivot*(pivot+1)/2;
            rightSum = totalSum - leftSum + pivot;

            if(leftSum == rightSum) 
                return pivot;
        }
        return -1;
    }
};
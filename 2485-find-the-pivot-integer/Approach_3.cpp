//Approach 3: Using Two Pointer.
//T.C = O(n), where n is number of elements we have traversed.
//S.C = O(1), since we haven't used any extra space.

class Solution {
public:
    int pivotInteger(int n) { 
        int i=1;
        int j=n;
        int rightSum = n;
        int leftSum = 1;

        while( i < j ){
            if(leftSum < rightSum){
                i++;
                leftSum += i;
            }
            else if(leftSum > rightSum){
                j--;
                rightSum += j;
            }
            else{ //when equal
                j--; i++;
                leftSum += i;
                rightSum += j;
            }
        }
        return leftSum == rightSum? i : -1;
    }
};
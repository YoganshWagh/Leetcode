//QUESTION: https://leetcode.com/problems/harshad-number/description/
//T.C = O(log10(x)), where x is the input number.
//S.C = O(1), as it only uses a constant amount of extra space regardless of the size of the input number.

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) 
    {
        int rem = 0;
        int sum = 0;
        int temp = x;

        while(temp > 0){
            sum += temp%10;
            temp = temp/10;
        }
        return x%sum == 0? sum:-1;
    }
};
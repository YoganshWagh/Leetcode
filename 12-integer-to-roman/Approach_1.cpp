//QUESTION: https://leetcode.com/problems/integer-to-roman/description/
//REFERENCE: https://youtu.be/2FPvU8XmsKU?si=dXDu2s2abpp87mVX
//Approach 1: Using Greedy Method.
//T.C = O(1), since we are doing constant number of iterations.
//S.C = O(n), where 'n' is the lenght of the resulting Roman numeral string.
class Solution {
public:
    string intToRoman(int num) 
    {
        //SINCE WE DON'T WANT TO ALWAYS INITIALIZE THIS VECTOR SO WE ARE MAKING IT STATIC.
        static vector<int> val{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        static vector<string> sym{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string result = "";

        //CONVERSION OF INT TO ROMAN USING FOR LOOP:
        for(int i=0; i<13; i++){
            if(num == 0)
                break;

            //how many times we need to add that symbol:
            int times = num / val[i];
            
            //applying while loop till times is non-zero:
            while(times--){
                result += sym[i];
            }

            //decrementing num after each iteration.
            num = num % val[i];
        }
        return result;
    }
};
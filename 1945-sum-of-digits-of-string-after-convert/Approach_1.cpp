//QUESTION: https://leetcode.com/problems/sum-of-digits-of-string-after-convert/description/
//REFERENCE: http://youtube.com/post/UgkxMEAiFr4oNFKdiBQX6bGP9nP_2ulod3bj?si=EBfHsxljCD3Zj9EP
//Approach 1: Brute Force.
//T.C : O(k*n), where 'k' is number of times transformation is done.
//S.C : O(n), where 'n' is size of string 's'.
class Solution {
public:
    int getLucky(string s, int k) 
    {
        //Step 1: Creating string to store converted alphabets.
        string num = "";

        //Step 2: Convert the alphabets to string.
        for(char &ch : s) {
            int char_int = ch - 'a' + 1; //a : 1, b : 2 and so on...
            num += to_string(char_int);
        }
        
        int sum = 0;
        //Step 3: Calculating sum based on value of 'k'.
        while(k > 0) {
            sum = 0;
            for(char &ch : num) {
                sum += ch - '0';
            }

            num = to_string(sum);
            k--;
        }

        return stoi(num);
    }
};
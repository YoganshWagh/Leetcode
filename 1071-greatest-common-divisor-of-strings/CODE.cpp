//QUESTION: https://leetcode.com/problems/greatest-common-divisor-of-strings/description/
//T.C = O(n), where 'n' is the total length of the concatenated strings (str1 + str2 and str2 + str1).
//S.C = O(n+m), where 'n' is the length of the concatenated strings and 'm' is the length of the substring extracted.

class Solution {
public:
    string gcdOfStrings(string str1, string str2) 
    {
        return (str1 + str2 == str2 + str1)? 
        str1.substr(0, gcd(size(str1),size(str2))): "";
    }
};
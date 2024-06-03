//QUESTION: https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/description/
//Approach 1: Using Two Pointer.
//T.C = O(m+n), where m is the size of the string 's' and 't'.
//S.C = O(1), since no extra space is used.

class Solution {
public:
    int appendCharacters(string s, string t) 
    {
        int i = 0, j = 0;

        while(i < t.size() && j < s.size()){
            if(t[i] == s[j]){
                i++;
            }
            j++;
        }

        return i == t.size()? 0 : t.size()-i;
    }
};
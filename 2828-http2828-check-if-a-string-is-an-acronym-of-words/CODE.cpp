// https://leetcode.com/contest/weekly-contest-359/problems/check-if-a-string-is-an-acronym-of-words/

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        
        //making a new string using first characters of each element of the string array:
        string res;
        for( int i=0; i<words.size(); i++ )
        {
            res += words[i][0];
        }
        
        //checking both strings are equal or not?
        if( s == res )
        {
            return 1;
        }
        return 0;
        
    }
};
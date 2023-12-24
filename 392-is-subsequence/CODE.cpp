//QUESTION: https://leetcode.com/problems/is-subsequence/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i=0, j=0;
        while( i<s.size() && j<t.size() )
        {
            if( s[i] == t[j] )
            {
                i++;
                j++;
            }
            else
                j++;
        }

        //returns true/ false according to condition.
        return (i == s.size());
    }
};

//QUESTION: https://leetcode.com/problems/largest-substring-between-two-equal-characters/description/
//REFERENCE: https://youtu.be/kQLhWLVlzYo?si=2wFI4U0CaLjdA-7b

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        //Approach 1: Brute Force.
        int result = -1;
        int n = s.size();

        for( int i=0; i<n-1; i++ )
        {
            for( int j=i+1; j<n; j++ )
            {
                if( s[i] == s[j] )
                    result = max( result, j-i-1 );                 
            }
        }
        return result;
    }
};

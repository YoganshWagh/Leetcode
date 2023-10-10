//SOLUTION: https://leetcode.com/problems/valid-anagram/solutions/3687854/3-methods-c-java-python-beginner-friendly/

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int> count;

        //COUNT THE FREQUENCY OF CHARACTERS IN STRING S:
        for( auto x : s )
            count[x]++;

        //DECREMENT THE FREQUENCY OF CHARACTERS IN STRING T:
        for( auto x : t )
            count[x]--;

        //CHECK IF ANY CHARACTER HAS NON-ZERO FREQUENCY:
        for( auto x : count )
        {
            if( x.second != 0 )
                return false;
        }

        return true;
    }
};

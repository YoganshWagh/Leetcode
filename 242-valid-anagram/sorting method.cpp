//QUESTION: https://leetcode.com/problems/valid-anagram/description/
//REFERENCE: https://youtu.be/9UtInBqnCgA?si=WAFbjw7Mb2HoPxuw

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        //SORTING METHOD:
        sort( s.begin(), s.end() );
        sort( t.begin(), t.end() );

        return s == t;  
    }
};

//QUESTION: https://leetcode.com/problems/backspace-string-compare/description/?envType=daily-question&envId=2023-10-19
//SOLUTION: https://leetcode.com/problems/backspace-string-compare/solutions/4184884/3-c-c-char-array-vs-string-as-stack-beats-100/?envType=daily-question&envId=2023-10-19

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        vector<char> s1, t1;
        //for string 's':
        for( auto x : s )
        {
            if( x >= 'a' && x <= 'z' ) 
                s1.push_back(x);
            else if( x == '#' && !s1.empty() ) 
                s1.pop_back();
        }

        //for string 't':
        for( auto x : t )
        {
            if( x >= 'a' && x <= 'z' )
                t1.push_back(x);
            else if( x == '#' && !t1.empty() )
                t1.pop_back();
        }

        //returning the answer:
        return s1 == t1;
    }
};

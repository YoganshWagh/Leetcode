// QUESTION: https://leetcode.com/problems/string-to-integer-atoi/
// REFERENCE: String to Integer Atoi By AYUSHI SHARMA

class Solution {
public:
    int myAtoi(string s) {
        
        //IF STRING IS EMPTY:
        if( s.size() == 0 ) 
            return 0;

        int i = 0, n = s.size();
        //TO REMOVE FRONT WHITESPACES:
        while( i<n && s[i] == ' ' )
            i++;

        //TO REMOVE WHITESPACES IN THE END:
        s = s.substr(i);   //i to n

        int sign = 1;
        long ans = 0;
        //IF NUMBER IS -VE:
        if( s[0] == '-' ) sign  = -1;

        int MAX = INT_MAX;
        int MIN = INT_MIN;
        //FROM WHICH INDEX WE HAVE TO START:
        i = (s[0] == '+' || s[0] == '-')? 1 : 0;

        while( i<s.size() )
        {
            //IF NON-DIGIT IS ENCOUNTERED:
            if( s[i] == ' ' || !isdigit(s[i]) ) break;

            //STORING ANSWER:
            ans = ans*10 + s[i]-'0';
            if( sign == -1 && -1*ans < MIN ) return MIN;
            if( sign == 1 && 1*ans > MAX ) return MAX;

            i++;
        }
        return (int)(sign*ans);
    }
};

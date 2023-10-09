//https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        
        //Integer to String:
        string s = to_string(x);

        //Reversing the string:
        ::reverse( s.begin(), s.end() );

        //String to Integer:
        unsigned int y;
        stringstream ss(s);
        ss >> y;

        //Checking if range goes out of signed 32-bit integer range [-231, 231 - 1]:
        if( log2(y) > 31 )
            return 0;

        //Returning reversed Integer:
        return x>0? y : -y;
    }
};

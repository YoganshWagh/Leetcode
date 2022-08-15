class Solution {
public:
    bool isPalindrome(string s) {
        
        string c = "";
        for( char i : s )
        {
            if( i >='A' && i<='Z' )
            {
                c += tolower(i);
            }
            else if( i>='a' && i<='z' )
            {
                c += i;
            }
            else if( i>='0' && i<='9' )
            {
                c += i;
            }
        }
        
        int i = 0, j = c.size() - 1;
        while(i<j)
        {
            if( c[i] != c[j] )
            {
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
};
  
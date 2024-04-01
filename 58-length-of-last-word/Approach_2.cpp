//Approach 2: Linear Traversal .
//T.C = O(n), where n is the length of the input string s.
//S.C =  O(1) because the code only uses a constant amount of extra space regardless of the size of the input string.

class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int length = 0;
        int i = s.length() - 1;
        
        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ')
            i--;
        
        // Count the characters until a space is encountered
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }
        
        return length;
    }
};
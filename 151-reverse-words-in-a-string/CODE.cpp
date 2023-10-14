//https://leetcode.com/problems/reverse-words-in-a-string/description/

class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.size();
        string ans = "";
        int i = 0;

        while( i < n )
        {
            string temp = "";

            //TO ENCOUNTER THE EXTRA SPACES:
            while( s[i] == ' ' && i<n )
                i++;

            //TO CHECK UPTO WHICH INDEX THE WORD IS PRESENT:
            while( s[i] != ' ' && i<n )
            {
                temp += s[i];
                i++;
            }
            
            //IF "temp" STRING IS GREATER THAN ZERO:
            //TO STORE ANSWER IN REVERSE ORDER IN "ans" STRING:
            if( temp.size() > 0 )
            {
                if( ans.size() == 0 )
                    ans = temp;
                else
                    ans = temp + ' ' + ans;
            }

        }
        return ans;
    }
};
//QUESTION: https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        //reversing the entire sentence for getting last word:
        ::reverse( s.begin(), s.end() );

        int i = 0;
        string temp = "";
        int n = s.size();
        while( i < n )
        {
            //elimination of leading spaces:
            while( s[i] == ' ' && i<n )
                i++;
            
            //storing the entire last word into the 'temp' string:
            while( s[i] != ' ' && i<n )
            {
                temp += s[i];      //or count++;
                i++;
            }

            //returning the length of the last word:
            return temp.size();          
        }

        return 0;
    }
};

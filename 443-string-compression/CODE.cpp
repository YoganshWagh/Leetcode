// https://leetcode.com/problems/string-compression/description/

class Solution {
public:
    int compress(vector<char>& chars) {

        int i = 0;
        int ansIndex = 0;
        int n = chars.size();

        while( i < n )
        {
            int j = i+1;
            while( j<n && chars[i]==chars[j] )
            {
                j++;
            }
            //when we will come here?
            //Either entire vector is traversed
            //or a new/different character is encountered

            //old character is stored:
            chars[ansIndex++] = chars[i];

            int count = j-i;

            if( count > 1 )
            {
                string cnt = to_string(count);
                for( auto ch: cnt)
                {
                    chars[ansIndex++] = ch;
                }
            }

            //moving to the new character:
            i = j;
        }
        return ansIndex;
    }
};
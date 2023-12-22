//QUESTION: https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/
//REFERENCE: https://youtu.be/uCbOYh01wYU?si=G20zM-3-EO6i8SH8

class Solution {
public:
    int minDeletions(string s) {
        
        //APPROACH 1
        int freq[26] = {0};
        for( char ch : s )
            freq[ch-'a']++;

        unordered_set<int> st;
        int deleted = 0;

        for( int i=0; i<26; i++ )
        {
            while( freq[i] > 0 && st.find(freq[i]) != st.end() )
            {
                freq[i] -= 1;
                deleted++;
            }
            st.insert(freq[i]);
        }
        
        return deleted;
    }
};
//APPROACH 3: Using Set.
//T.C = O(n)
//S.C = O(n)

class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int n = s.size();
        int  i = 0;
        int j = n/2;
        //for storing number of vowels in both halves.
        int countL = 0, countR = 0;

        unordered_set<char> st;
        string vowels = "aeiouAEIOU";
        st.insert( begin(vowels), end(vowels) );

        while( i<j && j<n )
        {
            if( st.find(s[i]) != st.end() ) countL++;
            if( st.find(s[j]) != st.end() ) countR++;
            i++; j++;
        }
        return countL == countR;
    }
};
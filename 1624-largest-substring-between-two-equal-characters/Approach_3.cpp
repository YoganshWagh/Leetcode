//T.C = O(n)  &   S.C = O(26) = O(1)

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {

        //Approach 3: Using integer Array.
        vector<int> count(26,-1);
        int result = -1;
        int n = s.size();

        for( int i=0; i<n; i++ )
        {
            char ch = s[i];
            //first time seeing this character:
            if( count[ch-'a'] == -1 )
                count[ch-'a'] = i;

            //already seen character:
            else
                result = max( result, i - count[ch-'a'] - 1 );
        }
        return result;
    }
};
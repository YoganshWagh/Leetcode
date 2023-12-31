//T.C = O(n)  &   S.C = O(n)

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {

        //Approach 2: Using Unordered Map (Hash Table).
        unordered_map<char,int> umap;
        int result = -1;
        int n = s.size();

        for( int i=0; i<n; i++ )
        {
            char ch = s[i];
            //first time seeing this character:
            if( umap.find(ch) == umap.end() )
                umap[ch] = i;

            //already seen character:
            else
                result = max( result, i-umap[ch]-1 );
        }
        return result;
    }
};
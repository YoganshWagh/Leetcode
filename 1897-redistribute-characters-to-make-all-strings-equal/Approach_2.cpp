class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        //Approach 2: Using integer Array.
        int count[26] = {0};
        int n = words.size();
        for( string x : words )
            for( char y : x ) count[y -'a']++;

        for( int x : count )
        {
            if( x % n != 0 ) return false;
        }
        return true;
    }
};
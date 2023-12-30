//QUESTION: https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/description/
//REFERNCE: https://youtu.be/BWETRja2KHg?si=vFG0OIY3TTE8-sdc

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        //Approach 1:
        unordered_map<char,int> umap;
        int n = words.size();
        for( string x : words )
            for( char y : x ) umap[y]++;

        for( auto x : umap )
        {
            if( x.second % n != 0 ) return false;
        }
        return true;
    }
};
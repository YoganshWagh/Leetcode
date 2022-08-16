class Solution {
public:
    char repeatedCharacter(string s) {
        
        map<char,int> mp;
        for( char x : s )
        {
            mp[x]++;
            if(mp[x]>=2) return x;
        }
        return 'a';
        
      
    }
};
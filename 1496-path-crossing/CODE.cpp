//QUESTION: https://leetcode.com/problems/path-crossing/description/
//REFERENCE: https://youtu.be/uJaWNFdm2IU?si=h04wKgV5ACjOc9Fe

class Solution {
public:
    bool isPathCrossing(string path) {
        
        unordered_set<string> visited;
        int x = 0, y = 0;

        string key = to_string(x) + ',' + to_string(y);
        visited.insert(key);

        for( char ch : path )
        {
            if( ch == 'N' )
                y++;
            else if( ch == 'S' )
                y--;
            else if( ch == 'E' )
                x++;
            else
                x--;

            key = to_string(x) + ',' + to_string(y);
            if( visited.find(key) != visited.end() )
                return true;
            
            visited.insert(key);
        }

        return false;
    }
};
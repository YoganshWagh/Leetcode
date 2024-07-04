//QUESTION: https://leetcode.com/problems/roman-to-integer/
//SOLUTION: https://leetcode.com/problems/roman-to-integer/solutions/3651672/best-method-c-java-python-beginner-friendly/
//Approach 1: Using Hash Table.
//T.C = O(n), where n is the length of input string 's'.
//S.C = O(1), since no extra amount of space is used.
class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char, int> mp;

        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int ans = 0;
        for( int i(0); i<s.size(); i++ )
        {
            if( mp[s[i]] < mp[s[i+1]] )
                ans -= mp[s[i]];
            
            else
                ans += mp[s[i]];
        }

        return ans;
    }
};

//QUESTION: https://leetcode.com/problems/longest-palindrome/description/
//Approach-1 (Using hashmap and countintg frequency)
//T.C : O(n)
//S.C : O(n)
class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        unordered_map<char, int> mp;

        int result = 0;
        for(char &ch : s) {
            mp[ch]++;
        }

        bool takeCentralChar = false;
        for(auto &it : mp) {
            if(it.second % 2 == 0) {
                result += it.second;
            } else {
                result += it.second - 1;
                takeCentralChar = true;
            }
        }

        if(takeCentralChar)
            result++;

        return result;
    }
};
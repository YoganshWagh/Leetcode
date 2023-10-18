//QUESTION: https://leetcode.com/problems/valid-anagram/description/
//SOLUTION: https://www.codingninjas.com/studio/guided-paths/basics-of-python/content/118795/offering/1461411?leftPanelTab=3

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        //COUNT THE FREQUENCY OF CHARACTERS IN STRING S:
        for( auto x : s )
            mp1[x]++;

        //DECREMENT THE FREQUENCY OF CHARACTERS IN STRING T:
        for( auto x : t )
            mp2[x]++;

        //CHECK IF ANY CHARACTER HAS NON-ZERO FREQUENCY:
       
        if( mp1 == mp2 ) return true;
        return false;
    }
};

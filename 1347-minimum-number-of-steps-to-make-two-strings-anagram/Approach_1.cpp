//QUESTION: https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/description/
//REFERENCE: https://youtu.be/dDQTlfWvzqE?si=NdwLzCic4ATxP0IB
//T.C = O(n)
//S.C = O(26) ~ O(1)

//APPORACH 1: Using two maps.
class Solution {
public:
    int minSteps(string s, string t) 
    {
        int result = 0;
        int mp_s[26] = {0};
        int mp_t[26] = {0};

        //frequency is stored in array.
        for(int i=0; i<s.size(); i++)
        {
            mp_s[s[i]-'a']++;
            mp_t[t[i]-'a']++;
        }

        //to calculate to availability of char of 's' in 't' and then
        //calculating the number of changes required for anagram.
        for(int i=0; i<26; i++)
        {
            if(mp_s[i] > mp_t[i])
                result += mp_s[i] - mp_t[i];
        }
        return result;
    }
};
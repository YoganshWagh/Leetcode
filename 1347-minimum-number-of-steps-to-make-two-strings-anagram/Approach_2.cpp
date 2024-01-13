//APPORACH 2: Using only one map of difference in frequency.
//T.C = O(n)
//S.C = O(26) ~ O(1)

class Solution {
public:
    int minSteps(string s, string t) 
    {
        int result = 0;
        int mp[26] = {0};

        //frequency is stored in array.
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]-'a']++;
            mp[t[i]-'a']--;
        }

        //adding the +ve difference.
        for(int i=0; i<26; i++)
        {
            if(mp[i] > 0)
                result += mp[i];
        }
        return result;
    }
};
//QUESTION: https://leetcode.com/problems/ransom-note/description/
//REFERENCE: https://leetcode.com/problems/ransom-note/solutions/3744949/easy-solution-using-hashmap/?envType=study-plan-v2&envId=top-interview-150
//T.C = O(m+n)  n - size of ransomNote, m - size of magazine
//S.C = O(m)    m - number of unique char of magazine in map

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int> str1;
        //iterate through the magazine and count characters.
        for(auto x : magazine) str1[x]++;

        //iterate through ransomNote and check character count.
        for(char c : ransomNote)
        {
            if( str1.find(c) != str1.end() && str1[c]>0 )
                str1[c]--;
            else
                return false;
        }
        return true;
    }
};
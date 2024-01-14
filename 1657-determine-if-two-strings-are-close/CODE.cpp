//QUESTION: https://leetcode.com/problems/determine-if-two-strings-are-close/description/
//REFERENCE: https://youtu.be/KbdCp4nUDiQ?si=ETwR7lP0tmDF8Y9g
//T.C : O(n)
//S.C : O(26) ~ O(1)

class Solution {
public:
    bool closeStrings(string word1, string word2) 
    {
        int m = word1.size();
        int n = word2.size();
        if(m != n) return false;

        vector<int> freq1(26); //by default c++ assigns all 0 values.
        vector<int> freq2(26); 

        //storing frequencies.
        for(int i=0; i<m; i++)
        {
            char ch1 = word1[i];
            char ch2 = word2[i];

            freq1[ch1-'a']++;
            freq2[ch2-'a']++;
        }

        //1st Point: Jo char word1 mai hai vo word2 mai hona chaiye.
        for(int i=0; i<26; i++)
        {
            //both side char is present.
            if(freq1[i] != 0 && freq2[i] != 0) continue;
            //both side this char isn't available.
            if(freq1[i] == 0 && freq2[i] == 0) continue;

            return false;
        }

        //2nd Point: matching frequencies.
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());
        
        return freq1 == freq2;
    }
};
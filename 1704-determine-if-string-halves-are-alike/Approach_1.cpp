//QUESTION: https://leetcode.com/problems/determine-if-string-halves-are-alike/description/
//REFERENCE: https://youtu.be/oSSMo0PCQts?si=PS5sMbIWAHddNfae
//T.C = O(N)
//S.C = O(1)

//APPROACH 1: Using Function.
class Solution {
public:
    bool isVowel(char ch)
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||
        ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        
        int n = s.size();
        int i = 0;
        int j = n/2;
        //to store count of vowels:
        int countLeft = 0;
        int countRight = 0;

        while( i<j && j<n )
        {
            if(isVowel(s[i])) countLeft++;
            if(isVowel(s[j])) countRight++;
            i++;
            j++;
        }
        return countLeft == countRight;
    }
};
//QUESTION: https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/description/
//REFERENCE: https://youtu.be/skEofEGj46Y?si=P746K938BcPVa88_
//Approach: Using Two Pointer approach.
//T.C = O(n), since each element is traversed once. 
//S.C = O(1), since no extra space is used.

class Solution {
public:
    int minimumLength(string s) 
    {
        int n = s.size();
        int i = 0, j = n-1;

        while(i<j && s[i] == s[j])
        {
            char ch = s[i]; //or s[j] since they are equal.

            //Incrementing prefix string until characters are same.
            while(i<j && s[i] == ch) i++;

            //Incrementing suffix string until characters are same.
            while(j>=i && s[j] == ch) j--;
        }
        return j - i + 1;
    }
};
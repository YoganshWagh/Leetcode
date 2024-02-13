//QUESTION: https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/
//T.C = O(n*m), where n is the number of words in the input vector and M is the average length of the words. This complexity arises from the loop that iterates through each word in the vector and the reverse operation, which takes O(m) time.
//S.C = O(m), where m is the length of the longest word in the input vector. This is because the code uses a temporary string temp to store the reversed version of each word.

class Solution {
public:
    string firstPalindrome(vector<string>& words) 
    {
        int n = words.size();
        for(int i=0; i<n; i++)
        {
            string temp = words[i];
            reverse(temp.begin(), temp.end());
            if(temp == words[i]) return words[i];
        }
        return "";
    }
};
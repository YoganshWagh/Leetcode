//QUESTION: https://leetcode.com/problems/reverse-prefix-of-word/description/
//Appraoch 1: Using Two pointer.
//T.C = O(n), in the worst case the character 'ch' will be in end.
//S.C = O(1), since extra amount of space is used.
class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        int i = 0;
        int j = word.find(ch);

        while(i<=j){
            swap(word[i], word[j]);
            i++;
            j--;
        }
        return word;   
    }
};
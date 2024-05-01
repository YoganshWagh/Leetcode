//Appraoch 2: Using Library function.
//T.C = O(n), in the worst case the character 'ch' will be in end.
//S.C = O(1), since extra amount of space is used.
class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        reverse(word.begin(), word.begin()+word.find(ch)+1);
        return word;   
    }
};
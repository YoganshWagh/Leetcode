//QUESTION: https://leetcode.com/problems/find-common-characters/
//Approach 1: Counting Minimum Frequency from all words.
//T.C = O(n⋅m), Where n is the number of words and m is the average length of the words.
//S.C = O(n⋅m), Where n is the number of words and m is the average length of the words.
class Solution {
public:
    vector<string> commonChars(vector<string>& words) 
    {
        vector<int> min_freq(26, INT_MAX);

        for (auto &word : words) {
            vector<int> freq(26, 0);

            for (char c : word) {
                freq[c - 'a']++;
            }
            for (int i = 0; i < 26; ++i) {
                min_freq[i] = min(min_freq[i], freq[i]);
            }
        }

        vector<string> result;
        for (int i = 0; i < 26; ++i) {
            while (min_freq[i]-- > 0) {
                result.push_back(string(1, i + 'a'));
            }
        }
        return result;
    }
};
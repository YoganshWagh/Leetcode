//Approach 3: Using find Function.
//T.C = O(n), single time we traversed the string.
//S.C = O(n), in worst case all words would contain 'x' in them.
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) 
    {
        vector<int> ans;

        for(int i=0; i<words.size(); i++)
        {
            if(words[i].find(x) != string::npos)
                ans.push_back(i);
        }

        return ans;
    }
};
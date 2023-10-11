//QUESTION: https://leetcode.com/problems/group-anagrams/description/
//SOLUTION: https://leetcode.com/problems/group-anagrams/solutions/3687735/beats-100-c-java-python-beginner-friendly/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //FOR STORING GROUPS OF ANAGRAMS:
        unordered_map<string, vector<string>> mp;

        for( auto x : strs )
        {
            string word = x;
            sort( word.begin(), word.end() );
            mp[word].push_back(x);
        }

        //TO STORE GROUPED ANAGRAMS IN VECTOR:
        vector< vector<string> > ans;
        for( auto x : mp )
            ans.push_back(x.second);

        return ans;
    }
};

//Approach 2: Using Brute Force.
//T.C : O(n)
//S.C : O(1) -> Ignoring the space taken for result string
class Solution {
public:
    string makeGood(string s) 
    {
        string result = "";
        int n = s.size();
        result += s[0];

        for(int i=1; i<n; i++){
            if(result.size()>0 && (result.back() - 32 == s[i] || result.back() + 32 == s[i]))
                result.pop_back();
            else
                result.push_back(s[i]);
        }
        return result;
    }
};
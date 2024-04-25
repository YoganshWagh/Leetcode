//QUESTION: https://leetcode.com/problems/longest-ideal-subsequence/description/
//REFERENCE: https://youtu.be/01nYV8eqxm8?si=Cz70m3W0Da6IRa5h
//Approach-1 (Using LIS code eactly)
//T.C : O(n^2)
//S.C : O(n)

class Solution {
public:
    int longestIdealString(string s, int k) {
        int n = s.length();
        
        int result = 1;
        vector<int> t(n, 1);
        //t[i] = Longest Ideal Subsequence ending at index i
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) {
                
                if(abs(s[j] - s[i]) <= k) {
                    t[i] = max(t[i], t[j]+1);
                }
            }
            result = max(result, t[i]);
        }   
        return result;
    }
};
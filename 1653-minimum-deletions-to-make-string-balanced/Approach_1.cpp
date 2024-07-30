//QUESTION: https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/description/
//REFERENCE: https://youtu.be/gorAMHTwDfU?si=IC3rGG7tzxKlJOe2
//Approach-1 (Using stack)
//T.C : O(n)
//S.C : O(n)
class Solution {
public:
    int minimumDeletions(string s) 
    {
        int n = s.length();
        int count = 0;
        stack<char> st;

        for(int i = 0; i < n; i++) {
            if(!st.empty() && s[i] == 'a' && st.top() == 'b') { //'ba'
                st.pop();
                count++;
            } else {
                st.push(s[i]);
            }
        }
        return count;
    }
};

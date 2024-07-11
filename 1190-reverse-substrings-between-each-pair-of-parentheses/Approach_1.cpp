//QUESTION: https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/description/
//REFERENCE: https://youtu.be/dUQRS4luBvA?si=Uw22p4opR92TY4cB
//Approach 1: Using Stack.
//T.C = O(n), where 'n' is number of elements in the string.
//S.C = O(n), where 'n' is number of elements in the string.
class Solution {
public:
    string reverseParentheses(string s) 
    {
        stack<int> st;
        int i(0), n = s.size();

        while(i < n){
            if(s[i] == '(')
                st.push(i);

            if(s[i] == ')'){
                reverse(s.begin()+st.top(), s.begin()+i);
                st.pop();
            }
            i++;
        }

        string ans = "";
        for(int i=0; i<n; i++){
            if(s[i] != '(' && s[i] != ')'){
                ans += s[i];
            }
        }
        return ans;
    }
};
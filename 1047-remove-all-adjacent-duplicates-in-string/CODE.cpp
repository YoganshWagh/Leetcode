// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

class Solution {
public:
    string removeDuplicates(string s) {

        int i=0;
        int n = s.size();
        stack<char> st;

        while( i<n )
        {
            if( st.empty() || st.top() != s[i] )
                st.push(s[i]);
            else
                st.pop();
            
            i++;
        }

        string ans = "";
        while( !st.empty() )
        {
            char ele = st.top();
            st.pop();
            ans += ele;
        }

        //reverse the answer before returning as stact follows LIFO:
        reverse( ans.begin(), ans.end() );
        return ans;
    }
};
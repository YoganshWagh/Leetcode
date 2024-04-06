//QUESTION: https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/description/
//REFERENCE: https://youtu.be/NNxaYz0nrk0?si=lfms2n9S8eX5P7tF
//Approach 1: Using Stack and Set.
//T.C = O(n), where all 'n' elements are traversed once of the input string.
//S.C = O(n), Stack and set both can store up to 'n' elements, where 'n' is the length of the input string.

class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
        unordered_set<int> remove_idx;
        stack<int> st;
        int n = s.size();

        for(int i=0; i<n; i++){
            if(s[i] == '(')
                st.push(i);
            else if(s[i] == ')'){
                if(st.empty())
                    remove_idx.insert(i);
                else
                    st.pop();
            }
        } 

        //in case of "((("
        while(!st.empty()){
            remove_idx.insert(st.top());
            st.pop();
        }  

        //for result storing:
        string result = "";
        for(int i=0; i<n; i++){
            if(remove_idx.find(i) == remove_idx.end())
                result += s[i];
        } 
        return result;
    }
};
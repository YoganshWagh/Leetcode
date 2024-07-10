//Approach 2: Using Stack.
//T.C = O(n), where 'n' is the size of array.
//S.C = O(n), extra space used to store 'n' elements.
class Solution {
public:
    int minOperations(vector<string>& logs) 
    {
        stack<string> st;

        for(int i=0; i<logs.size(); i++)
        {
            if(logs[i] == "../"){
                if(st.empty() == false)
                    st.pop();
            }
            
            else if(logs[i] == "./")
                continue;

            else
                st.push(logs[i]);
        }
        return st.size();
    }
};
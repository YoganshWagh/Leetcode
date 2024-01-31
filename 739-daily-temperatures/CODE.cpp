//QUESTION: https://leetcode.com/problems/daily-temperatures/description/
//REFERENCE: https://youtu.be/ZhZEmGv-sOY?si=7t-8gjRt52MNfaWP
//T.C = O(n*2) = O(n)
//S.C = O(n)

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        int n = temperatures.size();
        stack<int> st;
        vector<int> result(n);

        for( int i = n-1; i>=0; i--)
        {
            while(!st.empty() && temperatures[i] >= temperatures[st.top()])
                st.pop();
            
            if(st.empty()) result[i] = 0;
            else result[i] = st.top() - i;

            st.push(i);
        } 
        return result;  
    }
};
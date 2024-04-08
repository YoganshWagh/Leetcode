//Approach 2: Simply simulate whatever the problem asks for
//T.C : O(n), because it iterates through the students and sandwiches arrays once, where n is the size of either array.
//S.C : O(n), because it uses a stack and a queue, each potentially holding up to n elements.

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        int len = students.size();
        queue<int> que;
        stack<int> st;

        for (int i = 0; i < len; i++) {
            st.push(sandwiches[len - i - 1]);
            que.push(students[i]);
        }

        int lastServed = 0;
        while (!que.empty() && lastServed < que.size()) {
            if (st.top() == que.front()) {
                st.pop();
                que.pop();
                lastServed = 0;
            } else {
                que.push(que.front());
                que.pop();
                lastServed++;
            }
        }
        return que.size();
    }
};
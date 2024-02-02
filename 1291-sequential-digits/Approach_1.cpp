//QUESTION: https://leetcode.com/problems/sequential-digits/description/
//REFERENCE: https://youtu.be/E5XFO3-6xe4?si=yfwQd-FNuRg3D0qx
//T.C = O(n), where 'n' is number of sequential elements between 'low' and 'high'.
//S.C = O(n), where 'n' is number of sequential digits stored between.

//Approach 1: Using BFS.
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        queue<int> que;
        for(int i(1); i<=8; i++) que.push(i);

        //for storing sequential digits.
        vector<int> result;

        while(!que.empty())   //BFS
        {
            int temp = que.front();
            que.pop();

            if(temp >= low && temp <= high)
                result.push_back(temp);

            int last_digit = temp % 10;
            if(last_digit + 1 <= 9)
                que.push(temp * 10 + (last_digit + 1));
        }
        return result;
    }
};
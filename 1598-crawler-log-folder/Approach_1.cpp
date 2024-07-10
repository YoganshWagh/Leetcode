//QUESTION: https://leetcode.com/problems/crawler-log-folder/description/
//REFERENCE: https://youtu.be/xAI0hcwzuuE?si=cZrtXtaQM-WnAb0P
//Approach 1: Using Counting.
//T.C = O(n), since we are traversing each element once.
//S.C = O(1), since no extra space is used.
class Solution {
public:
    int minOperations(vector<string>& logs) 
    {
        int depth = 0;

        for(int i=0; i<logs.size(); i++)
        {
            if(logs[i] == "../")
                depth = max(0, depth-1);

            else if(logs[i] == "./")
                continue;

            else
                depth++;
        }
        return depth;
    }
};
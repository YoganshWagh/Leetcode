//QUESTION: https://leetcode.com/problems/find-the-town-judge/description/https://leetcode.com/problems/find-the-town-judge/description/
//REFERENCE: https://youtu.be/ottPfSr3xls?si=3i3gcJyMVfCj-p56
//Approach 1: Using Indegree and Outdegree concept.
//T.C = O(n)
//S.C = O(n)

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        vector<int> inDegree(n+1);
        vector<int> outDegree(n+1);

        for(vector<int> vec : trust)
        {
            int u = vec[0];
            int v = vec[1];
            inDegree[u]++;
            outDegree[v]++;
        }

        for(int i=1; i<=n; i++) 
            if(inDegree[i] == 0 && outDegree[i] == n-1) return i;

        return -1;
    }
};
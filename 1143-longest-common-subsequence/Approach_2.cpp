//QUESTION: https://leetcode.com/problems/longest-common-subsequence/
//REFERENCE: https://youtu.be/aJNu_DLyOxY?si=7HeOjF4YrnVXr-IN
//Approach 2: Bottom Up.
//T.C =  O(m * n), where m is the length of string s1 and n is the length of string s2.
//S.C = O(n * m), space complexity is determined by the 2D array t with dimensions (m+1) x (n+1).

class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) 
    {
        int m = s1.size();
        int n = s2.size();
        //2D array:
        vector<vector<int>> t(m+1, vector<int>(n+1));

        //first row and column will be zero:
        for(int row=0; row<m+1; row++)
            t[row][0] = 0;

        for(int col=0; col<n+1; col++)
            t[0][col]= 0;

        for(int i=1; i<m+1; i++)
        {
            for(int j=1; j<n+1; j++)
            {
                if(s1[i-1] == s2[j-1])
                    t[i][j] = 1 + t[i-1][j-1];
                else 
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
        return t[m][n];
    }
};
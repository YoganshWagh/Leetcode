//QUESTION: https://leetcode.com/problems/number-of-islands/description/
//REFERENCE: https://youtu.be/yYKGNW6Y7BA?si=ThTNO99TdtCtJJZC
//Approach 1: Using DFS.
//T.C = O(row*col), since each element of the 2D array is traversed once.
//S.C = O(1), since no extra space is used.

class Solution {
public:
    int row;
    int col;

    void dfs(vector<vector<char>>& grid, int i, int j){
        if(i<0 || i>=row || j<0 || j>=col || grid[i][j] != '1')
            return;

        grid[i][j] = '$';

        dfs(grid, i-1, j);
        dfs(grid, i+1, j);
        dfs(grid, i, j-1);
        dfs(grid, i, j+1);
    }

    int numIslands(vector<vector<char>>& grid) {
        row = grid.size();
        col = grid[0].size();
        int islands = 0;

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j] == '1'){
                    dfs(grid, i, j);
                    islands++;
                }
            }
        }
        return islands;
    }
};
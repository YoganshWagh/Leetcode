//QUEESTION: https://leetcode.com/problems/island-perimeter/description/
//REFERENCE: https://youtu.be/O34v6f6s3lQ?si=44qkfnjNjtzPeAWS
//Approach 1: Iterative Approach.
//T.C = O(row*col), where 'row' represents the number of rows in the grid and 'col' represents the number of columns in the grid.
//S.C = O(1), since constant amount of space is used.

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int perimeter = 0;

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j] == 0)
                    continue;

                if(i+1 >= row || grid[i+1][j] == 0) //down
                    perimeter++;

                if(i-1 < 0 || grid[i-1][j] == 0)  //up
                    perimeter++;

                if(j+1 >= col || grid[i][j+1] == 0) //right
                    perimeter++;
                    
                if(j-1 < 0 || grid[i][j-1] == 0) //left
                    perimeter++;
            }
        }
        return perimeter;
    }
};
//QUESTION: https://leetcode.com/problems/largest-local-values-in-a-matrix/
//T.C = O(n*n)
//S.C = O(1)

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        for(int i=0; i<row-2; i++){
            for(int j=0; j<col-2; j++){
                
                int maxLocal = INT_MIN;

                for(int k=0; k<3; k++){
                    for(int p=0; p<3; p++){
                        maxLocal = max(maxLocal, grid[i+k][j+p]);
                    }
                }
                grid[i][j] = maxLocal;
            }
        }

        //FOR DOING INPLACE WE ARE CHANGING SIZE OF ARRAY TO 'row-2'
        grid.resize(row - 2);
        for(int i=0; i<row; i++)
            grid[i].resize(row-2);
        
        return grid;
    }
};
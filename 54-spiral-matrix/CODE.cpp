// https://leetcode.com/problems/spiral-matrix/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int count(0);
        int total_element = row*col;

        //index initialization:
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;

        while( count < total_element )
        {
            //printing starting row:
            for( int i=startingCol; i<=endingCol && count<total_element; i++ )
            {
                ans.push_back( matrix[startingRow][i] );
                count++;
            }
            startingRow++;

            //printing last column:
            for( int i=startingRow; i<=endingRow && count < total_element; i++ )
            {
                ans.push_back( matrix[i][endingCol] );
                count++;
            }
            endingCol--;

            //printing last row:
            for( int i=endingCol; i>=startingCol && count < total_element; i-- )
            {
                ans.push_back( matrix[endingRow][i] );
                count++;
            }
            endingRow--;

            //printing starting column:
            for( int i=endingRow; i>=startingRow && count < total_element; i-- )
            {
                ans.push_back( matrix[i][startingCol] );
                count++;
            }
            startingCol++;
        }

        //returning spiral array:
        return ans;
    }
};
//QUESTION: https://leetcode.com/problems/set-matrix-zeroes/description/
//REFERENCE: https://youtu.be/W6La6f7POk0?si=P0t6XmGTCnV_C_o4
// T.C = O(m*n)  &  S.C = O(m+n)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        //Step 1: n is row & m is column.
        int n = matrix.size();
        int m = matrix[0].size();

        //Step 2: We store the row and column which contains '0'
        // to change it entirely to zero.
        vector<int> x, y;

        //Step 3: Find columns and rows where 0 is there.
        for( int i=0; i<n; i++ )
        {
            for( int j=0; j<m; j++ )
            {
                if( matrix[i][j] == 0 )
                {
                    y.push_back(j);  //column
                    x.push_back(i);  //row
                }
            }
        }

        //Step 4: Make entire row zero where there is zero.
        for( int i=0; i<x.size(); i++ )
        {
            int index = x[i];
            for( int j=0; j<m; j++ )
                matrix[index][j] = 0;
        }

        //Step 5: Make entire column zero wherever there is zero.
        for( int i=0; i<y.size(); i++ )
        {
            int index = y[i];
            for( int j=0; j<n; j++ )
                matrix[j][index] = 0;
        }
    }
};
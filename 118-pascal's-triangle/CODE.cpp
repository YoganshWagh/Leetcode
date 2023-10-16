//QUESTION: https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    int nCr( int n, int r )
    {
        long long  res = 1;
        for( int i(0); i<r; i++ )
        {
            res = res * (n-i);
            res = res / (i+1);
        }

        return res;
    }

    vector<vector<int>> generate(int numRows) {
        
        vector<int> ans; 
        vector<vector<int>> list;
        for( int row=1; row<=numRows; row++ ) 
        {
            for( int c(1); c<=row; c++ )
            {
                ans.push_back( nCr(row-1, c-1 ) );
            }
            list.push_back(ans);
            ans.clear();
        }

        return list;
    }
};

//OUESTION: https://leetcode.com/problems/pascals-triangle-ii/description/?envType=daily-question&envId=2023-10-16
//SOLUTION: https://youtu.be/bR7mQgwQ_o8?si=RdCa-3U6wCZ39scY

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
    vector<int> getRow(int rowIndex) {

        vector<int> ans;  
        for( int c(0); c<=rowIndex; c++ )
        {
            ans.push_back( nCr(rowIndex, c ) );
        }

        return ans;
    }
};

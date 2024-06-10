//QUESTION: https://leetcode.com/problems/height-checker/description/
//Approach: Brute Force.
//T.C = O(nlogn) + O(n), where n is size of array 'heights' and 'expected'.
//S.C = O(n), for creating a 'expected' array of same size as 'height'.
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int> expected( heights );
        sort( expected.begin(), expected.end() );
        
        int count = 0;
        for( int i = 0; i<heights.size(); ++i )
        {
            if( heights[i] != expected[i] )
            {
                count++;
            }
        }
        
        return count;
    }
};
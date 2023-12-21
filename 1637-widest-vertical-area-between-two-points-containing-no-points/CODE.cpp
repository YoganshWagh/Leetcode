//QUESTION: https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/description/
//REFERENCE: https://youtu.be/6XnvNCTyJP4?si=votejCgf3LkUyx1R

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        
        //FIRST SORT THE ARRAY:
        sort( points.begin(), points.end() );
        int res = 0;

        //FIND MAXIMUM DISTANCES AMONG ALL DIFFERENCES BASED ON 'X' COORDINATE:
        for( int i=0; i<points.size()-1; i++ )
            res = max( res, points[i+1][0]-points[i][0] );

        return res;
    }
};

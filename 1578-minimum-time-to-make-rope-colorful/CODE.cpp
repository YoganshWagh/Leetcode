//QUESTION: https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
//REFERENCE: https://youtu.be/_xNrzKfORNA?si=irM91LJp1haKgfYp

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int n = colors.size();
        int minTime = 0;
        int prevMax = 0;

        for( int i=0; i<n; i++ )
        {
            if( i>0 && colors[i] != colors[i-1] )
                prevMax = 0;
                
            int curr = neededTime[i];
            minTime += min( prevMax, curr );  //greedily
            prevMax = max( prevMax, curr );
        }

        return minTime;
    }
};
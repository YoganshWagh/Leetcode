//QUESTION: https://leetcode.com/problems/assign-cookies/description/
//REFERENCE: https://youtu.be/oyzF9AsOUQ8?si=jvrDi2Jf8pp293zG

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        //Step 1: Sort both arrays.
        sort( g.begin(), g.end() );
        sort( s.begin(), s.end() );

        //Step 2: Two pointers 'i' & 'j' initialization.
        int i=0, j=0;
        int n = g.size();
        int m = s.size();

        //Step 3: checking the points when s[j] >= g[i].
        while( i<n && j<m )
        {
            if( s[j] >= g[i] )
                i++;
            j++;
        } 

        //Step 4: Returning the number of satisfied children.
        return i;
    }
};
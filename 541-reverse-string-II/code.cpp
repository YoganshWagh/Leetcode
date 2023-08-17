//https://leetcode.com/problems/reverse-string-ii/description/

class Solution {
public:
    string reverseStr(string v, int k) {
        
        int n = v.size();
        for( int i=0; i<n; i+=2*k )
        {
            if( i+k <= n )
                reverse( v.begin()+i, v.begin()+i+k );
            
            else 
                reverse( v.begin()+i, v.end() );
           
        }
     
        return v;
    }
};
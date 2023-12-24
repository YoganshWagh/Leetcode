class Solution {
public:
    int minOperations(string s) {
        
        //APPROACH 2:
        int n = s.size();
        int start_with_0 = 0; //0101010

        for( int i=0; i<n; i++ )
        {
            //EVEN POSITION:
            if( i%2 == 0 ) 
            {
                //if there is no 1 in 1010 format:
                if( s[i] == '1' )
                    start_with_0++;
            }
            //ODD POSITION:
            else
            {
                //if there is no 0 in odd posisiton of 1010 format:
                if( s[i] == '0' )
                    start_with_0++;
            }
        }

        int start_with_1 = n - start_with_0;
        return min( start_with_0, start_with_1 );
    }
};
//QUESTION: https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/description/
//REFERENCE: https://youtu.be/YB4oUR2Skfk?si=cli_2e6SHcHCYL7O

class Solution {
public:
    int minOperations(string s) {
        
        //APPROACH 1:
        int start_with_0 = 0; //0101010
        int start_with_1 = 0; //1010101

        for( int i=0; i<s.size(); i++ )
        {
            //EVEN POSITION:
            if( i%2 == 0 ) 
            {
                //if there is no 1 in 1010 format:
                if( s[i] == '0' )
                    start_with_1++;
                //if there is no 0 in 0101 format:
                else
                    start_with_0++;
            }
            //ODD POSITION:
            else
            {
                //if there is no 0 in odd posisiton of 1010 format:
                if( s[i] == '1' )
                    start_with_1++;
                    //if there is no 1 in odd position of 0101 format:
                else
                    start_with_0++;
            }
        }

        return min( start_with_0, start_with_1 );
    }
};
//QUESTION: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/
//REFERENCE: https://youtu.be/3-c1Gc-5QnE?si=3sCKIPdWVeA0m9q6
//T.C = O(m*n)  &  S.C = O(1)

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        int n = bank.size();
        int prevDevice = 0;
        int result = 0;

        for( int i=0; i<n; i++ )
        {
            int currDevice = 0;
            for( char ch : bank[i] )
            {
                if( ch == '1' )
                    currDevice++;
            }

            result += prevDevice * currDevice;
            if( currDevice != 0 )
                prevDevice = currDevice;
        }
        return result;
    }
};
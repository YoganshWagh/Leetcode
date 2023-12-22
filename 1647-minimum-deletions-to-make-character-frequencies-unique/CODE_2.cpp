class Solution {
public:
    int minDeletions(string s) {
        
        //APPROACH 2
        int freq[26] = {0};
        for( char ch : s )
            freq[ch-'a']++;

        sort( begin(freq), end(freq) );
        int deleted = 0;

        for( int i=24; i>=0 && freq[i]>0; i-- )
        {
            if( freq[i] >= freq[i+1] )
            {
                int prev = freq[i];
                freq[i] = max( 0, freq[i+1]-1 );
                deleted += prev - freq[i]; 
            }
        }
        
        return deleted;
    }
};
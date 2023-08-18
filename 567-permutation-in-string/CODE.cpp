// https://leetcode.com/problems/permutation-in-string/description/

class Solution {

private:
    bool checkEqual( int a[26], int b[26] ) 
    {
        for( int i=0; i<26; i++ )
        {
            if( a[i] != b[i] )
                return 0;
        }
        return 1;
    }   

public:
    bool checkInclusion(string s1, string s2) {
        
        //to find count of characters present in s1:
        int count1[26] = {0};
        for( int i=0; i<s1.size(); ++i )
        {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        //traverse s2 string in window of size s1 length:
        int i = 0;
        int windowSize = s1.size();
        int count2[26] = {0};

        while( i<windowSize && i<s2.size() )
        {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        if( checkEqual( count1, count2 ) )
            return 1;

        //moving the window forward:
        while( i<s2.size() )
        {
            //new character added in window must be added:
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            //old character removed from window must be removed;
            char old = s2[i-windowSize];
            index = old - 'a';
            count2[index]--;
            i++;

            //checking whether new window is equal to s1 or not?
            if( checkEqual(count1, count2 ) )
                return 1;
        }

        return 0;

    }
};
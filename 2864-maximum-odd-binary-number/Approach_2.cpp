//Approach 2
//T.C = O(n), where 'n' is number of elements in the string.
//S.C = O(1)

class Solution {
public:
    string maximumOddBinaryNumber(string s) 
    {
        int start=0,n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                swap(s[start],s[i]);
                start+=1;
            }
        }
        
        if(s[n-1]=='0') swap(s[start-1], s[n-1]);
        return s;
    }
};
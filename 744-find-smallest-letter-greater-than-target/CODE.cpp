//QUESTION: https://leetcode.com/problems/find-smallest-letter-greater-than-target/
//T.C = O(n), where 'n' is size of letters vector.
//S.C = O(1)

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        for(int i=0; i<letters.size(); i++)
        {
            if(target - 'a' < letters[i] - 'a')
                return letters[i];
        }
        return letters[0];
    }
};
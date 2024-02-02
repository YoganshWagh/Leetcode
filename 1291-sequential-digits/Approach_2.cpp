//Approach 2: Are Bhai Bhai. (Use only when interviewer asks for constant time & space complexity.)
//T.C = O(1)
//S.C = O(1)

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        //constant space vector since number of digits are constant. 
        vector<int> allPossible = {12, 23, 34, 45, 56, 67, 78, 89,
                                123, 234, 345, 456, 567, 678, 789,
                                1234, 2345, 3456, 4567, 5678, 6789,
                                12345, 23456, 34567, 45678, 56789,
                                123456, 234567, 345678, 456789,
                                1234567, 2345678, 3456789,
                                12345678, 23456789,
                                123456789};
        //to store sequential digits.
        vector<int> result;
        int n = allPossible.size();

        //fixed number of Iterations.
        for(int i=0; i<n; i++)
        {
            if(allPossible[i] < low) continue;
            if(allPossible[i] > high) break;
            //case where number lies between low and high.
            result.push_back(allPossible[i]);
        }
        return result;
    }
};
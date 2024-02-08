//Approach 2: Using Bottom Up.
//REFERENCE: https://youtu.be/7zfmLa6vzaA
//T.C = O(n^2), the total number of subproblems solved is proportional to the sum of the first n square numbers. This sum can be approximated as O(n^2).
//S.C = O(n), where the space required for the memoization array is O(n), since it stores solutions for each value from 0 to n.

class Solution {
public:
    int numSquares(int n) 
    {
        vector<int> t(n+1, INT_MAX);
        //t[i] = number of perfect squares to get i.
        //return t[n].

        t[0] = 0; //since we are not gonna use '0'.
        for(int i=1; i <= n; i++)
        {
            for(int j=1; j*j <= i; j++)
                t[i] = min(t[i], 1 + t[i - j*j]);
        }
        return t[n];
    }
};
//QUESTION: https://leetcode.com/problems/water-bottles/description/
//REFERENCE: https://youtu.be/v2D_v3llC98?si=PDfH4uT7lSfQ_a-j
//Approach 1: Using Greedy Approach.
//T.C = O(log to the base numExchange (numBottles)), since we can observe that in each iteration, n is reduced by a factor of numExchange. This suggests a logarithmic behavior.
//S.C = O(1), since no extra space is used.
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) 
    {
        int maxi = numBottles;
        int n = numBottles;

        while(n >= numExchange){
            int remaining = n % numExchange;
            n = n/numExchange;
            maxi += n;
            n = n + remaining;
        }
        return maxi;
    }
};
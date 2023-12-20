// QUESTION: https://leetcode.com/problems/buy-two-chocolates/description/
// SOLUTION: https://leetcode.com/problems/buy-two-chocolates/solutions/4427319/video-give-me-5-minutes-how-we-think-about-a-solution-bonus-codes-in-python/?envType=daily-question&envId=2023-12-20

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        int firstMinCost = INT_MAX;
        int SecondMinCost = INT_MAX;

        for( int p : prices )
        {
            if( p < firstMinCost )
            {
                SecondMinCost = firstMinCost;
                firstMinCost = p;
            }
            else
                SecondMinCost = min( SecondMinCost, p );
        }

        int leftOver = money - ( firstMinCost + SecondMinCost );
        return leftOver>=0 ? leftOver : money;
    }
};
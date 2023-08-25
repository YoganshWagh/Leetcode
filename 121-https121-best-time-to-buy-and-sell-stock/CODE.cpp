// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int min = 100;
        int count = 0;
        for( int i=0; i<prices.size(); i++ )
        {
            if( prices[i]<min )
            {
                min = prices[i];
                count++;
            }
        }
        
        int max = -1;
        for( int i=count; i<prices.size(); i++ )
        {
            if( prices[i]>max )
            {
                max = prices[i];
            }
        }
        
         int n = prices.size()-1;
        if( prices[n] == min )
        {
            return 0;
        }
        
        return max-min;

    }
};
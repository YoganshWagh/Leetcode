//QUESTION: https://leetcode.com/problems/time-needed-to-buy-tickets/description/
//REFERENCE: https://youtu.be/r2LPa779amQ?si=o1zvi3GbGHv89xLb
//Approach 1: One pass Solution.
//T.C = O(n), since we are traversing through each element once.
//S.C = O(1), since we haven't used any extra space.

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) 
    {
        int time = 0;
        int n = tickets.size();

        for(int i=0; i<n; i++){
            if(i <= k)
                time += min(tickets[i], tickets[k]);
            else
                time += min(tickets[k]-1, tickets[i]);
        }
        return time;
    }
};
//QUESTION: https://leetcode.com/problems/find-players-with-zero-or-one-losses/description/
//REFERENCE: https://youtu.be/bXptmD2qWYI?si=tlfEQ7G1xSoCzIiC
//T.C : O(n*logn)
//S.C : O(n)

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        //key: Player number, value: count of losses.
        unordered_map<int,int> lost_map; 

        for(int i=0; i<matches.size(); i++)
            lost_map[matches[i][1]]++;

        vector<int> notLost;
        vector<int> lostOnce;

        for(int i = 0; i<matches.size(); i++)
        {
            int winner = matches[i][0];
            int loser = matches[i][1];

            if(lost_map.find(winner) == lost_map.end())
            {
                notLost.push_back(winner);
                lost_map[winner] = 2;
            }

            if(lost_map[loser] == 1 )
                lostOnce.push_back(loser);
        }

        //answer is required in sorted order so:
        sort( notLost.begin(), notLost.end() );
        sort( lostOnce.begin(), lostOnce.end() );

        return {notLost, lostOnce};
    }
};
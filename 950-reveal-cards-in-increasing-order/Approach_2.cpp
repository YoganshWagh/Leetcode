//Approach 1: Simulation using Queue.
//T.C = O(nlogn)
//S.C = O(n), space acquired by Queue.

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) 
    {
        int n = deck.size();
        vector<int> result(n);
        queue<int> que;

        for(int i=0; i<n; i++)
            que.push(i);

        //sorting the deck array first:
        sort(deck.begin(), deck.end());

        for(int i=0; i<n; i++){
            int idx = que.front();
            que.pop();
            
            result[idx] = deck[i];

            if(!que.empty()){
                que.push(que.front());
                que.pop();
            }
        }
        return result;
    }
};
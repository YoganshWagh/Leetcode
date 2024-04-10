//QUESTION: https://leetcode.com/problems/reveal-cards-in-increasing-order/description/
//REFERENCE: https://youtu.be/S6MGVmkMz2c?si=fZrTr6BwazEfLUoV
//Approach 1: Simulation.
//T.C = O(nlogn)
//S.C = O(n), including auxilary space i.e the result array. 
//S.C = O(1), excluding result i.e output.

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) 
    {
        int n = deck.size();
        vector<int> result(n,0);
        bool skip = false;

        int i = 0; //for traversing deck
        int j = 0; //for traversing result

        //sorting the deck array first:
        sort(deck.begin(), deck.end());

        while(i < n){
            //khali hai vo space:
            if(result[j] == 0){
                if(skip == false){
                    result[j] = deck[i];
                    i++;
                }
                skip = !skip; //to alternate the skip
            }
            j = (j+1)%n;
        }
        return result;
    }
};
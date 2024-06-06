//QUESTION: https://leetcode.com/problems/hand-of-straights/
//REFERENCE: https://youtu.be/lpVhzcdiHMs?si=n2n2Rw3lFpa-t86q
//Approach 1: Using Hash Table.
//T.C = O(n*logn) + O(n*groupSize), where O(n*logn) is the time complexity for inserting n elements in 
// ordered map and O(n*groupSize) for iterating the map.
//S.C = O(n), where n is size of the hand array.
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) 
    {
        int n = hand.size();
        if(n % groupSize != 0) 
            return false; 

        //T.C = O(n*logn)
        map<int,int> mp;
        for(int &x : hand){
            mp[x]++; //T.C = O(logn)
        } 

        //T.C = O(n*groupSize)
        while(mp.empty() == false)
        {
            int curr = mp.begin()->first;

            for(int i=0; i<groupSize; i++)
            {
                if(mp[curr+i] == 0){ //frequency is zero.
                    return false;
                }
                mp[curr+i]--;
                if(mp[curr+i] < 1){
                    mp.erase(curr+i);
                }
            }
        }
        return true;
    }
};
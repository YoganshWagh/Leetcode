//QUESTION: https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/
//REFERENCE: https://youtu.be/lq3RMxKST-Y?si=eA7ZOQEtIsE1RAvK
//Approach 1: Simulation using array.
//T.C = O(n*n), in worst case erase will shift 'n' elements again.
//S.C = O(1), since no extra space is used.
class Solution {
public:
    int findTheWinner(int n, int k) 
    {
        //STORING 1 TO N IN VECTOR FOR DOING SIMULATION:
        vector<int> arr;
        for(int i=1; i<=n; i++){
            arr.push_back(i);
        }

        //GAME WILL START FROM 1ST PLAYER WHICH IS 0TH ELEMENT.
        int i = 0;
        while(arr.size() > 1){
            int idx = (i + k - 1)% arr.size();
            //deletes element at that index and and shifts elements to its place.
            arr.erase(arr.begin() + idx);
            i = idx;  
        }
        return arr[0];
    }
};
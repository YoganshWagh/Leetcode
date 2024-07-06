//QUESTION: https://leetcode.com/problems/pass-the-pillow/description/
//Approach 1: Using Simulation.
//T.C = O(n), where 'n' is input given.
//S.C = O(1), since no extra space is used.
class Solution {
public:
    int passThePillow(int n, int time) 
    {
        int dir = 1;
        int i = 1;
        int j = 0;

        while(j != time){
            if(dir == 1){
                i++;
            }else{
                i--;
            }

            j++;
            if(i == n) dir = -1;
            if(i == 1) dir = 1;
        }
        return i;
    }
};
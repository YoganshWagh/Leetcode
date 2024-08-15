//QUESTION: https://leetcode.com/problems/lemonade-change/description/
//REFERENCE: https://youtu.be/sYHJEPs9sSE?si=t_y87j9Z_qQuqTqy
//Approach 1: Using Simulation.
//T.C = O(n), where 'n' is the size of the array.
//S.C = O(1), since no extra amount of space we have used.
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int five = 0;
        int ten = 0;
        int twenty = 0;

        for(auto &x : bills)
        {
            if(x == 5){ //for 5$
                five++;
            } 
            else if(x == 10){ //for 10$
                if(five > 0){
                    five--;
                    ten++;
                }else{
                    return false;
                }
            } else{ //for 20$
                if(five > 0 && ten > 0){
                    five--;
                    ten--;
                    twenty++;
                } else if(five >= 3){
                    five -= 3;
                    twenty++;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};
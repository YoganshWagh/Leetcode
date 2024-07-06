//Approach 2: Using Maths.
//T.C = O(1), since only one computation is required.
//S.C = O(1), since no extra space is used.
class Solution {
public:
    int passThePillow(int n, int time) 
    {
        int fullRounds = time / (n-1);
        int timeLeft = time % (n-1);

        if(fullRounds % 2 == 0){
            return timeLeft + 1;
        }else{ //odd case
            return n - timeLeft;
        }
        return 0;
    }
};
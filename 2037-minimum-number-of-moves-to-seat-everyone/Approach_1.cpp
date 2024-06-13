//QUESTION: https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/description/
//Approach 1: Using Two Pointer.
//T.C = O(nlogn) + O(n) = O(nlogn), where 'n' is the size of the array.
//S.C = O(1), sinc eno extra space is used.
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) 
    {
        //Step 1: Sort both arrays.
        sort(students.begin(), students.end()); //O(nlogn)
        sort(seats.begin(), seats.end());

        //Step 2: Calculate number of moves using Two Pointer approach,
        int moves = 0;
        for(int i=0; i<students.size(); i++){
            moves += abs(students[i] - seats[i]);
        }

        return moves;
    }
};
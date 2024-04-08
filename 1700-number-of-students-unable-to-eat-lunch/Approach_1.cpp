//QUESTION: https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/description/
//REFERENCE: https://youtu.be/M0lhTkhUlp4?si=9mF3CQnk8-mCPdsi
//Approach 1: By Counting the 0's and 1's.
//T.C = O(n), since we are visiting every elements once.
//S.C = O(1), since constant amount extra space is used.

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        int n = sandwiches.size();

        int arr[2] = {0};
        //arr[0] = count of students liking 0 sandwich.
        //arr[1] = count of students liking 1 sandwich.

        for(auto &x : students)
            arr[x]++;

        for(int i=0; i<n; i++){
            int sand = sandwiches[i];
            
            //if count of any sandwich becomes zero and we get that sandwich in the Sandwiches array:
            if(arr[sand] == 0)
                return n-i;

            arr[sand]--;
        }
        return 0;
    }
};
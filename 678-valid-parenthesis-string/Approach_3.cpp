//Approach 3: Using Greedy.
//T.C : O(n), since we are traversing each element of string once.
//S.C : O(1), since no extra space is used.
class Solution {
public:
    bool checkValidString(string s)
    {
        int n = s.size();
        int open = 0; //for left to right traversal
        int close = 0; //for right to left traversal

        //LEFT TO RIGHT TRAVERSAL:
        for(int i=0; i<n; i++){
            if(s[i] == '(' || s[i] == '*')
                open++;
            else
                open--;

            if(open < 0)
                return false;
        }

        //RIGHT TO LEFT TRAVERSAL:
        for(int i=n-1; i>=0; i--){
            if(s[i] == ')' || s[i] == '*')
                close++;
            else
                close--;

            if(close < 0)
                return false;
        }
        return true;
    }
};
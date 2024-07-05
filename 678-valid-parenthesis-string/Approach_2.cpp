//Approach 2: Using Stack.
//T.C : O(n), since we are traversing each element of string once.
//S.C : O(n), to store 'n' elements into the stack.
class Solution {
public:
    bool checkValidString(string s)
    {
        //CREATING TEO STACKS:
        //1. TO STORE OPEN "(" AND CLOSE PARENTHESIS ")"
        //2. TO STORE ASTERISKS "*"
        stack<int> OpenSt;
        stack<int> AsteriskSt;

        for(int i=0; i<s.size(); i++){

            if(s[i] == '(')
                OpenSt.push(i);
            else if(s[i] == '*')
                AsteriskSt.push(i);
            else{
                if(OpenSt.empty() == false)
                    OpenSt.pop();
                else if(AsteriskSt.empty() == false)
                    AsteriskSt.pop();
                else
                    return false;
            }
        }

        while(OpenSt.empty() == false && AsteriskSt.empty() == false){
            if(OpenSt.top() > AsteriskSt.top())
                return false;
            OpenSt.pop();
            AsteriskSt.pop();
        }
        return OpenSt.empty();
    }
};
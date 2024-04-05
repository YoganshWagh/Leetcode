//QUESTION: https://leetcode.com/problems/make-the-string-great/
//REFERENCE: https://youtu.be/J43ZIltH3AY?si=KaJ6qqt0xXILwC1c
//Approach 1: Brute Force.
//T.C : O(n)
//S.C : O(1) -> Ignoring the space taken for result string
class Solution {
public:
    string makeGood(string s) 
    {
        //it is working as a stack:
        string result = "";
        
        for(char &x : s){
            if( result.size() > 0 && (result.back() - 32 == x || result.back() + 32 == x))
                result.pop_back();  //when one is capital and one is small or vice versa.
            else
                result.push_back(x);
        }
        return result;
    }
};
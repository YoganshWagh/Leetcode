//QUESTION: https://leetcode.com/problems/maximum-odd-binary-number/description/
//Approach 1: Using another string.
//T.C = O(n), where 'n' is number of elements in the string.
//S.C = O(n), where 'n' is space consumed to store new string.

class Solution {
public:
    string maximumOddBinaryNumber(string s) 
    {
        int countOne=0;
        for(auto it:s){
            if(it=='1') countOne+=1;
        }

        string ans="";
        for(int i=0;i<s.length()-1;i++){
           if(countOne>1){
               ans+='1';
               countOne--;
           }
           else
               ans+='0';
        }
        ans+='1';
        return ans; 
    }
};
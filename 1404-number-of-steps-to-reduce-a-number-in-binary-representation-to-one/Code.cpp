//QUESTION: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/description/
//Approach: Bit Manipulation.
//T.C = O(n**2), where n is the size of the array.
//S.C = O(1), since no extra space is required.
class Solution {
public:
    int numSteps(string s) 
    {
        if (s == "10") return 1;
        if (s == "1")  return 0;
        s = '0' + s;
        int n = s.size()-1;
        int ans = 0;

        while(n != 0){
            int temp = n;
            if(s[temp] == '1'){
                while(s[temp] != '0'){
                    s[temp] = '0';
                    temp--;
                }
                s[temp] = '1';
            }
            else{
                n--;
            }
            ans++;
        }
        return ans;
    }
};
// https://leetcode.com/problems/longest-valid-parentheses/submissions/

#include<algorithm>
class Solution {
public:
    int longestValidParentheses(string s) {
        
        int l=0,r=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
           if(s[i]=='(') l++;
           if(s[i]==')') r++;
           if(l==r){
               ans=max(ans,l+r);
           }
           if(r>l){     
               //valid substring(parenthesis) can only found ahead
               l=r=0;
           }
           
        }
        l=r=0;
        for(int i=s.size()-1;i>=0;i--){
           if(s[i]=='(') l++;
           if(s[i]==')') r++;
           if(l==r){
               ans=max(ans,l+r);
           }
           if(l>r){
               l=r=0;
           }
           
        }
        return ans;
    }
};
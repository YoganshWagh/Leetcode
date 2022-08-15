class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.size(); ++i){
            if(s[i]>='A' && s[i]<='Z'){
                str.push_back(s[i]);
            }
            if(s[i]>='a' && s[i]<='z'){
                str.push_back(s[i]);
            }
            if(s[i]>='0' && s[i]<='9'){
                str.push_back(s[i]);
            }
        }
        transform(str.begin(),str.end(),str.begin(),::tolower);
        string ans = str;
        reverse(ans.begin(),ans.end());
        if(ans==str){
            return true;
        }
        return false;
    }
};
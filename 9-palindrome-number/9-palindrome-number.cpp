class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long pali = 0;
        long long ans = x;
        while(x!=0){
            int r = x % 10;
            pali = pali*10+r;
            x/=10;
        }
        return ans==pali?true:false;
        
    }
};
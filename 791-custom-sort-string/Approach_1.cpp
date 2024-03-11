//QUESTION: https://leetcode.com/problems/custom-sort-string/description/
//REFERENCE: https://youtu.be/oGPfmp71Zm4?si=W1h1_h47ZIrJ98RI
//Approach 1: Using Map.
//T.C = O(m+n), where m is size of order string and n is size of s string.
//S.C = O(1), constant space of 26 is required to store chars of s.

class Solution {
public:
    string customSortString(string order, string s) {
        //creating a map to store frequency of all elements of 's'.
        int count[26] = {0};

        //storing frequency:
        for(auto x : s){
            count[x-'a']++;
        }

        //string to store result.
        string result = "";
        for(auto x : order){
            while(count[x-'a']>0){
                result.push_back(x);
                count[x-'a']--;
            }
        }

        //for remaining elements of s.
        for(auto x : s){
            if(count[x-'a']>0){
                result.push_back(x);
                count[x-'a']--;
            }
        }
        return result;
    }
};
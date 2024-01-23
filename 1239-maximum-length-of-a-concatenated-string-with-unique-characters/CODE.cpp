//QUESTION: https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/description/
//REFERENCE: https://youtu.be/MqMvkrkerIY?si=WPXJVJMhE88toh54
//T.C = O(2^n)
//S.C = O(n) + O(1)
//Approach: Using Recursion and DP.

class Solution {
public:
    bool hasDuplicate(string &s1, string &s2 )
    {
        int arr[26] = {0};

        //check also this: {"aa","bb"}
        for( char ch : s1 )
        {
            if(arr[ch-'a'] > 0) return true;
            arr[ch-'a']++;
        }

        for( char ch : s2 )
        {
            //char is repeating:
            if(arr[ch-'a'] > 0)
                return true; 
        }
        return false; //no duplicate found
    }

    int solve(int i,vector<string>& arr, string temp, int n)
    {
        if(i >= n) return temp.length();

        int exclude = 0;
        int include = 0;

        if( hasDuplicate(arr[i], temp) )
            exclude = solve(i+1, arr, temp, n);
        else
        {
            exclude = solve(i+1, arr, temp, n);
            include = solve(i+1, arr, temp + arr[i], n);
        }
        return max(include, exclude);
    }

    int maxLength(vector<string>& arr) 
    {
        //no concatenation till now:
        string temp = "";
        int n = arr.size();
        int i = 0;
        return solve(i,arr,temp,n);
    }
};
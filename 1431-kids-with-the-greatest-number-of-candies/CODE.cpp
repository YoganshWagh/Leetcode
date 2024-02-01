//QUESTION: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/
//T.C = O(n), where 'n'  is number of elements in candies vector.
//S.C = O(n), where 'n'  is number of elements in candies vector.

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int n = candies.size();
        vector<bool> result;
        int maxi = *max_element(candies.begin(), candies.end());

        for(int i=0; i<n; i++)
        {
            if((candies[i] + extraCandies) >= maxi)
                result.push_back(1);
                
            else result.push_back(0);
        }
        return result;
    }
};
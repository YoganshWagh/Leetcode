//Approach 2: Using normal Sort on a vector<pair<string, int>>
//T.C = O(n) + O(nlogn) + O(n) = O(nlogn), where 'n' is the size of input arraty.
//S.C = O(n), where 'n' elements are stored in ans vector.
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        int n = names.size();
        vector<pair<int, string>> ans(n);

        //inserting pairs into vector.
        for(int i=0; i<n; i++){
            ans[i] = make_pair(heights[i], names[i]);
        }

        //sorting from the end.
        sort(ans.rbegin(), ans.rend());
        
        //storing answer into names vector.
        for(int i=0; i<n; i++){
            names[i] = ans[i].second;
        }

        return names;
    }
};
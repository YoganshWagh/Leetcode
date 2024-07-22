//Approach 3: Using Unordered Map.
//T.C = O(n) + O(nlogn) + O(n) = O(nlogn), where 'n' is the size of input array.
//S.C = O(n), where 'n' elements are stored in ans vector.
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        int n = names.size();
        unordered_map<int, string> ans;

        //inserting pairs into map.
        for(int i=0; i<n; i++){
            ans[heights[i]] = names[i];
        }

        //sorting from the map according to height i.e. the first element.
        sort(heights.rbegin(), heights.rend());
        
        //storing answer into names vector.
        for(int i=0; i<n; i++){
            names[i] = ans[heights[i]];
        }

        return names;
    }
};
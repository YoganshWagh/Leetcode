//QUESTION: https://leetcode.com/problems/sort-the-people/description/
//REFERENCE: https://www.youtube.com/channel/UCaw58edcO3ZqMw76Bvs0kGQ/community?lb=UgkxlI0gXDQdeyNf-IPtQLQaEqn8KkdfB--U
//Approach 1: Using Custom Sort on a vector<pair<string, int>>
//T.C = O(n) + O(nlogn) + O(n) = O(nlogn), where 'n' is the size of input arraty.
//S.C = O(n), where 'n' elements are stored in ans vector.
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        int n = names.size();
        vector<pair<string,int>> ans(n);

        //inserting pairs into vector.
        for(int i=0; i<n; i++){
            ans[i] = make_pair(names[i], heights[i]);
        }

        //sorting the heights.
        auto lambda = [](auto &p1, auto &p2){
            return p1.second > p2.second;
        };

        //sorting according to the lambda function.
        sort(ans.begin(), ans.end(), lambda);
        
        //storing answer into names vector.
        for(int i=0; i<n; i++){
            names[i] = ans[i].first;
        }

        return names;
    }
};
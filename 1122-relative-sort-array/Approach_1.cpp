//QUESTION: https://leetcode.com/problems/relative-sort-array/description/
//Approach 1: Using Hash Map.
//T.C = O(n), where n is number of elements of arr1.
//S.C = O(n), where n is number of elements of arr1.
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        map<int,int> mp;
        for(auto x: arr1){
            mp[x]++;
        }
        arr1.clear();

        for(int i=0; i<arr2.size(); i++){
            if(mp.find(arr2[i]) != mp.end()){
                while(mp[arr2[i]] != 0){
                    arr1.push_back(arr2[i]);
                    mp[arr2[i]]--;
                }
                mp.erase(arr2[i]);
            }
        }

        for(auto x : mp){
            while(x.second > 0){
                arr1.push_back(x.first);
                x.second--;
            }
        }

        return arr1;
    }
};
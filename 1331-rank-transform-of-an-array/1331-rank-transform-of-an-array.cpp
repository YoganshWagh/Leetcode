class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        unordered_map<int,int> mp;
        vector<int> temp = arr;
        sort( temp.begin(), temp.end() );
        vector<int> ans;
        int k = 1;
        for( int i = 0; i<arr.size(); ++i )
        {
            if( mp.find(temp[i]) != mp.end() )
            {
                continue;
            }
            else
            {
                mp[temp[i]] = k;
                k++;
            }
        }
        
        for( int i = 0; i<arr.size(); ++i )
        {
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};
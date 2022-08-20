class Solution {
public:
   // vector<int> occ;
    void Occurence( vector<int> &nums, int target,vector<int> &occ )
   {
    int s = 0, e = nums.size()-1;
    int ans = -1;
    int midd = s + (e-s)/2;
    while( s<=e )
    {
        if( nums[midd] == target )
        {
            ans = midd;
            e = midd - 1;
        }
        else if( nums[midd] > target )
        {
            e = midd - 1;
        }
        else
        {
            s = midd + 1;
        }
        midd = s + (e-s)/2;
        
    }
    occ[0]=ans;
    int ss = 0, ee = nums.size()-1;
    ans = -1;
    int mid = ss + (ee-ss)/2;
    while( ss<=ee )
    {
        if( nums[mid] == target )
        {
            ans = mid;
            ss = mid + 1;
        }
        else if( nums[mid] > target )
        {
            ee = mid - 1;
        }
        else
        {
            ss = mid + 1;
        }
        mid = ss + (ee-ss)/2;
        
    }
    occ[1]=ans;
}
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        sort( nums.begin(), nums.end());
        vector<int> v;
        vector<int > occ(2);
        Occurence(nums, target,occ);
        if(occ[0]==-1 && occ[1]==-1) {
             occ.clear();
             return occ;
        }
        for(int i=occ[0];i<=occ[1]; i++) v.push_back(i);
        return v;
        
    }
};
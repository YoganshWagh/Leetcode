int firstOccurence( vector<int> &nums, int target )
{
    int s = 0, e = nums.size()-1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while( s<=e )
    {
        if( nums[mid] == target )
        {
            ans = mid;
            e = mid - 1;
        }
        else if( nums[mid] > target )
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
        
    }
    return ans;
}

int secondOccurence( vector<int> &nums, int target )
{
    int s = 0, e = nums.size()-1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while( s<=e )
    {
        if( nums[mid] == target )
        {
            ans = mid;
            s = mid + 1;
        }
        else if( nums[mid] > target )
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
        
    }
    return ans;
}
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        sort( nums.begin(), nums.end() );
        vector<int> v;
        int i = secondOccurence(  nums,  target );
        int j = firstOccurence( nums,  target );
        if(i==-1 && j==-1) return v;
        for(int x = j;x<=i; x++) v.emplace_back(x);
        return v;
        
    }
};
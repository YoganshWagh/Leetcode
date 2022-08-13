class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // set.find(k)==set.end()
       //   set.find()!=set.end()
        set<int> sett;
        for( int i=0; i<nums.size(); ++i )
        {
            sett.insert( nums[i] );
        }
        
        int c = 1;
        while(true)
        {
            if( sett.find(c) != sett.end() )
            {
                c++;
            }
            else
            {
                return c;
            }
        }
        
        return 0;
    }
};
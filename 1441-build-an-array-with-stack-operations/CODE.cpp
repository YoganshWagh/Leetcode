// QUESTION: https://leetcode.com/problems/build-an-array-with-stack-operations/description/
// SOLUTION: https://youtu.be/2ie1esMzUdc?si=xs22q-hm8F6Z5Jmq

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {

        //to store answer:
        vector<string> ans;
        //creating a pointer:
        int j = 0;

        for( int i=1; i<=n; i++ )
        {
            if( j >= target.size() ) 
                break;
            if( target[j] == i )
            {
                ans.push_back("Push");
                j++;
            }
            else
            {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            
        }
        return ans;
    }
};

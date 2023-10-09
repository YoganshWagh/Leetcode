//REFERENCE VIDEO: https://www.youtube.com/watch?v=g5mmW0GOTx8
//IN O(N) TIME COMPLEXITY:

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        //Question Based on Heap Sort:
        //Solving using Priority Queue and making a Heap:
        priority_queue<int> pq( nums.begin(), nums.end() );

        //storing answer in ans variable:
        int ans = 0;

        while( k-- )
        {
            ans  = pq.top();
            pq.pop();
        }

        return ans;

    }
};